import unittest

def substring_search_last_occurrence(pattern, text):
    if len(pattern) < len(text):
        result = last_index_of(pattern, text)
    else:
        result = -1
    return result


def last_index_of(pattern, text):
    position = 0
    index = -1
    last_index = -1
    for i in range(len(text)):
        if text[i] == pattern[position]:
            position += 1
            if index < 0:
                index = i
            if position == len(pattern):
                last_index = index
                index = -1
                position = 0
        else:
            position = 0
            index = -1
    return last_index


class TestPatternSearchLastOccurrence(unittest.TestCase):

    def test_case_1(self):
        text = "fghaaajguraaaa"
        pattern = "aaaa"
        expected = 10
        self.assertEqual(substring_search_last_occurrence(pattern, text), expected)

    def test_case_2(self):
        text = "my home bb is beautiful bb'"
        pattern = "bb"
        expected = 24
        self.assertEqual(substring_search_last_occurrence(pattern, text), expected)

    def test_case_3(self):
        text = "my home is beautiful"
        pattern = "bb"
        expected = -1
        self.assertEqual(substring_search_last_occurrence(pattern, text), expected)

    def test_case_4(self):
        text = "3123"
        pattern = "33"
        expected = -1
        self.assertEqual(substring_search_last_occurrence(pattern, text), expected)

    def test_case_5(self):
        text = "3123"
        pattern = "3312345"
        expected = -1
        self.assertEqual(substring_search_last_occurrence(pattern, text), expected)


if __name__ == '__main__':
    unittest.main()
