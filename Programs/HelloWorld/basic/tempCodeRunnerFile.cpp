    int luckyNumbers[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Number " << i + 1 << " :" << endl;
        cin >> luckyNumbers[i];
    }
  for (int i = 0; i < 5; i++)
    {
         cout << luckyNumbers[i] << endl;
        cout <<*(luckyNumbers+i)<<"  ";
    }