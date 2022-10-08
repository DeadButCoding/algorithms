1. What is Machine Learning?
Machine Learning comprises two words-machine and learning, which hint towards its definition - a subdomain in computer science that deals with the application of mathematical algorithms to identify the trend or pattern in a dataset.

The simplest example is the usage of linear regression (y=mt+c) to predict the output of a variable y as a function of time. The machine learning model learns the trends in the dataset by fitting the equation on the dataset and evaluating the best set of values for m and c. One can then use these equations to predict future values.

Access 100+ ready-to-use, sample Python and R codes for data science to prepare for your Data Science Interview

2. Quickly differentiate between Machine Learning, Data Science, and AI.

Machine Learning
Data Science
Artificial Intelligence

Basic Meaning

A branch of Artificial Intelligence that deals with the usage of simple statistics-inspired algorithms to identify patterns in the dataset.
Data Science refers to the art of using machine learning and deep learning techniques over large data to predict certain outcomes.
A term that broadly covers the applications of computer science spanning Robotics, Text Analysis, etc.

3. Out of Python and R, which is your preference for performing text analysis?
Python is likely to be everyone’s choice for text analysis as it has libraries like Natural Language Toolkit (NLTK), Gensim. CoreNLP, SpaCy, TextBlob, etc. are useful for text analysis.

4. What are Recommender Systems?
Understanding consumer behavior is often the primary goal of many businesses. For example, consider the case of Amazon. If a user searches for a product category on its website, the major challenge for Amazon’s backend algorithms is to come up with suggestions that are likely to motivate the users to make a purchase. And such algorithms are the heart of recommendation systems or recommender systems. These systems aim at analyzing customer behavior and evaluating their fondness for different products. Apart from Amazon, recommender systems are also used by Netflix, Youtube, Flipkart, etc.

5. Why data cleaning plays a vital role in the analysis? (Access popular Python and R Codes for data cleaning )It is cumbersome to clean data from multiple sources to transform it into a format that data analysts or scientists can work with. As the number of data sources increases, the time it takes to clean the data increases exponentially due to the number of sources and the volume of data generated in these sources. It might take up to 80% of the time for cleaning data, thus making it a critical part of the analysis task.

6. Define Collaborative filtering.
The process of filtering is used by most recommender systems to identify patterns or information by collaborating viewpoints, various data sources, and multiple agents.

7. What is an Eigenvalue and Eigenvector?
Eigenvectors are used for understanding linear transformations. They are the directions along which a particular linear transformation acts by flipping, compressing, or stretching. Eigenvalues can be referred to as the strength of the transformation in the direction of the eigenvector or the factor by which the compression occurs. We usually calculate the eigenvectors for a correlation or covariance matrix in data analysis.

8. What is Gradient Descent?
Gradient descent is an iterative procedure that minimizes the cost function parametrized by model parameters. It is an optimization method based on convex function and trims the parameters iteratively to help the given function attain its local minimum. Gradient measures the change in parameter with respect to the change in error. Imagine a blindfolded person on top of a hill and wanting to reach the lower altitude. The simple technique he can use is to feel the ground in every direction and take a step in the direction where the ground is descending faster. Here we need the help of the learning rate which says the size of the step we take to reach the minimum. The learning rate should be chosen so that it should not be too high or too low. When the selected learning rate is too high, it tends to bounce back and forth between the convex function of the gradient descent, and when it is too low, we will reach the minimum very slowly.


9. Differentiate between a multi-label classification problem and a multi-class classification problem.
Multi-label Classification
Multi-Class Classification
A classification problem where each target variable in the dataset can be labeled with more than one class.

For Example, a news article can be labeled with more than two topics, say, sports and fashion.
A classification problem where each target variable in the dataset can be assigned only one class out of two or more than two classes.
For Example, the task of classifying fruits images where each image contains only one fruit.

 

10. What are the various steps involved in an analytics project?
Understand the business problem and convert it into a data analytics problem.
Use exploratory data analysis techniques to understand the given dataset.
With the help of feature selection and feature engineering methods, prepare the training and testing dataset.
Explore machine learning/deep learning algorithms and use one to build a training model.
Feed training dataset to the model and improve the model’s performance by analyzing various statistical parameters.
Test the performance of the model using the testing dataset.
Deploy the model, if needed, and monitor the model performance.

11. What is the difference between feature selection and feature engineering methods?
Feature Selection
Feature Engineering

Feature selection methods are the methods that are used to obtain a subset of variables from the dataset that are required to build a model that best fits the trends in the dataset.

Feature Engineering methods are the methods that are used to create new features from the given dataset using the existing variables. These methods allow to better fit complicated trends in the dataset.

Example: Intrinsic Methods(Rule and tree-based algorithms, MARS Models, etc.), Filter Methods, Wrapper Methods(Recursive Feature Elimination, Genetic Algorithms, etc.) 

Example: Imputation, Discreteziation, Categorical Encoding, etc.

12. What do you know about MLOps tools? Have you ever used them in a machine learning project?
MLOps tools are the tools that are used to produce and monitor the enterprise-grade deployment of machine learning models. Examples of such tools are MLflow, Pachyderm, Kubeflow, etc.
In case you haven’t worked on an MLOps project, try this MLOps project by Goku Mohandas on Github or this MLOps Project on GCP using Kubeflow for Model Deployment by ProjectPro.


13. What do you understand by logistic regression? Explain one of its use-cases.
Logistic regression is one of the most popular machine learning models used for solving a binary classification problem, that is, a problem where the output can take any one of the two possible values. Its equation is given by 

logistic regression
Where X represents the feature variable,  a,b are the coefficients, and Y is the target variable. Usually, if the value of Y is greater than some threshold value, the input variable is labeled with class A. Otherwise, it is labeled with class B.

14. How are univariate, bivariate, and multivariate analyses different from each other?
Univariate Analysis
Bivariate Analysis
Multivariate Analysis

When only one variable is being analyzed through graphs like pie charts, the analysis is called univariate.
When trends in two variables are compared using graphs like scatter plots, the analysis of the bivariate type.
When more than two variables are considered for analysis to understand their correlations, the analysis is termed as multivariate.

15. What is K-means? 
K-means clustering algorithm is an unsupervised machine learning algorithm that classifies a dataset with n observations into k clusters. Each observation is labeled to the cluster with the nearest mean.

16. How will you find the right K for K-means?
To find the optimal value for k, one can use the elbow method or the silhouette method.

17. What do you understand by long and wide data formats?
In wide data format, you will find a column for each variable in the dataset. On the other hand, in a long format, the dataset has a column for specific variable types & a column for the values of those variables.
For example,
Wide Data Format
Wide Data Format

long data format
Long data format

Image Source: Mason John on Quora

18. What do you understand by feature vectors?
Feature vectors are the set of variables containing values describing each observation’s characteristics in a dataset. These vectors serve as input vectors to a machine learning model.

19. How does the use of dropout work as a regulariser for deep neural networks?
Dropout is a regularisation method used for deep neural networks to train different neural networks architectures on a given dataset. When the neural network is trained on a dataset, a few layers of the architecture are randomly dropped out of the network. This method introduces noise in the network by compelling nodes within a layer to probabilistically take on more or less authority for the input values. Thus, dropout makes the neural network model more robust by fixing the units of other layers with the help of prior layers.

20. How beneficial is dropout regularisation in deep learning models? Does it speed up or slow down the training process, and why?
The dropout regularisation method mostly proves beneficial for cases where the dataset is small, and a deep neural network is likely to overfit during training. The computational factor has to be considered for large datasets, which may outweigh the benefit of dropout regularisation.
The dropout regularisation method involves the random removal of a layer from a deep neural network, which speeds up the training process.

21. How will you explain logistic regression to an economist, physician-scientist, and biologist?
Logistic regression is one of the simplest machine learning algorithms. It is used to predict the relationship between a categorical dependent variable and two or more independent variables. The mathematical formula is given by 
Where X is the independent variable,  a,b are the coefficients, and Y is the dependent variable that can take categorical values.

22. What is the benefit of batch normalization?
The model is less sensitive to hyperparameter tuning.
High learning rates become acceptable, which results in faster training of the model.
Weight initialization becomes an easy task.
Using different non-linear activation functions becomes feasible.
Deep neural networks are simplified because of batch normalization.
It introduces mild regularisation in the network.

23. What is multicollinearity, and how can you overcome it?
A single dependent variable depends on several independent variables in a multiple regression model. When these independent variables are deduced to possess high correlations with each other, the model is considered to reflect multicollinearity. 
One can overcome multicollinearity in their model by removing a few highly correlated variables from the regression equation.

24. What do you understand by the trade-off between bias and variance in Machine Learning? What is its significance?

The expected value of test-MSE (Mean Square Error, for a given value x0, can always be decomposed into the sum of three fundamental quantities: the variance of f0‘(x0), the squared bias of f0(x0), and the variance of the error terms e. That is,

E(y0 − f0‘(x0))2 = Var(f0‘(x0) + [Bias(f0‘(x0))]2 + Var(e) 

Here the notation(y0 − f0(x0))2 defines the expected test MSE, and refers to the average test MSE that one would obtain if they repeatedly estimated f using a large number of training sets, and tested each at x0. Also, f0‘(x0) refers to the output of the fitted ML model for a given input x0 and e is the deviation of the predicted valuef0‘(x0) from the true value at a given x0.

The equation above suggests that we need to select a statistical learning method that simultaneously achieves low variance and low bias to minimize the expected test error. A good statistical learning method's good test set performance requires low variance and low squared bias. This is referred to as a trade-off because it is easy to obtain a method with extremely low bias but high variance (for instance, by drawing a curve that passes through every single training observation) or a method with a very low variance

but high bias (by fitting a horizontal line to the data). The challenge lies in finding a method for which both the variance and the squared bias are low.


25. What do you understand by interpolating and extrapolating the given data?
Interpolating the data means one is estimating the values in between two known values of a variable from the dataset. On the other hand, extrapolating the data means one is estimating the values that lie outside the range of a variable.

26. Do gradient descent methods always converge to the same point?
No, gradient descent methods do not always converge to the same point because they converge to a local minimum or a local optima point in some cases. It depends a lot on the data one is dealing with and the initial values of the learning parameter.

27. What is the difference between Supervised Learning and Unsupervised Learning?
Supervised Learning
Unsupervised Learning

If an algorithm learns something from the training data so that the knowledge can be applied to the test data, then it is referred to as Supervised Learning. 
If the algorithm does not learn anything beforehand because there is no response variable or training data, it is referred to as unsupervised learning. 
It is majorly used to make predictions for a dependent variable.
It is primarily used to perform analysis and group similar data points together.
Classification and Regression are an examples of Supervised Learning.
Clustering and dimensionality reduction are examples of unsupervised learning.

28. What is Regularization and what kind of problems does regularization solve?
Regularization is basically a technique that is used to push or encourage the coefficients of the machine learning model towards zero to reduce the over-fitting problem. The general idea of regularization is to penalize complicated models by adding an additional penalty to the loss function in order to generate a larger loss. In this way, we can discourage the model from learning too many details and the model is much more general.
There are two ways of assigning the additional penalty term to the loss function giving rise to two types of regularization techniques. They are

L2 Regularization 

L1 Regularization

In L2 Regularization, the penalty term is the sum of squares of the magnitude of the model coefficients while in L1 Regularization, it is the sum of absolute values of the model coefficients.


29. How can you overcome Overfitting?
We can overcome overfitting using one or more of the following techniques
1. Simplifying the model: We can reduce the overfitting of the model by reducing the complexity of model. We can either remove layers or reduce the number of neurons in the case of a deep learning model, or prefer a lesser order polynomial model in case of regression.

2. Use Regularization: Regularization is the common technique used to remove the complexity of the model by adding a penalty to the loss function. There are two regularization techniques namely L1 and L2. L1 penalizes the sum of absolute values of weight whereas L2 penalizes the sum of square values of weight. When data is too complex to be modeled, the L2 technique is preferred and L1 is better if the data to be modeled is quite simple. However, L2 is more commonly preferred.
3. Data Augmentation: Data augmentation is nothing but creating more data samples using the existing set of data. For example, in the case of a convolutional neural network, producing new images by flipping, rotation, scaling, changing brightness of the existing set of images helps in increasing the dataset size and reducing overfitting.
4. Early Stopping: Early stopping is a regularization technique that identifies the point from where the training data leads to generalization error and begins to overfit. The algorithm stops training the model at that point.
5. Feature reduction: If we have a small number of data samples with a large number of features, we can prevent overfitting by selecting only the most important features. We can use various techniques for this such as F-test, Forward elimination, and Backward elimination.
6. Dropouts: In the case of neural networks, we can also randomly deactivate a proportion of neurons in each layer. This technique is called dropout and it is a form of regularization. However, when we use the dropout technique, we have to train the data for more epochs.


30. Differentiate between Batch Gradient Descent, Mini-Batch Gradient Descent, and Stochastic Gradient Descent.
Gradient descent is one of the most popular machine learning and deep learning optimization algorithms used to update a learning model's parameters. There are 3 variants of gradient descent.
Batch Gradient Descent: Computation is carried out on the entire dataset in batch gradient descent.
Stochastic Gradient Descent: Computation is carried over only one training sample in stochastic gradient descent.
Mini Batch Gradient Descent: A small number/batch of training samples is used for computation in mini-batch gradient descent.
For example, if a dataset has 1000 data points, then batch GD, will train on all the 1000 data points, Stochastic GD will train on only a single sample and the mini-batch GD will consider a batch size of say100 data points and update the parameters.
