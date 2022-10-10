from collections import Counter

def sherlockValidSting(s):
  freq = Counter(s)

  # same frequency
  if len(set(freq.values()) == 1):
    return 'Yes'
  # more than 2 unique frequencies
  elif len(freq.values() > 2):
    return 'No'
  # two unit freq
  else:
    for key in freq:
      freq[key] -=1
      temp = list(freq.values())
      # remove zeros
      try:
        temp.remove(0)
      except:
        pass
      if len(set(temp) == 1):
        return  'Yes'
      else:
        freq[key] +=1
    return 'No'
