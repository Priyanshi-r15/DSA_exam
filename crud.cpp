// #include <iostream>

// using namespace std;

// int main()
// {
//     char name[100];
//     int  id, size=0;
//     int marks;
//     cout << "Enter the size of array = ";
//     cin >> user;
//     cout << "----------------------------------" << endl;

   
//     for (int i = 0; i < user; i++)
//     {
//         cout << "[" << i <<"] = ";
//         cin >> char[i];
//         size++;
//     }
//      cout << "----------------------------------" << endl;
//         int pos, upd, c, pos2, val, count;

//     do
//     {
//         cout << "1. Insert" << endl;
//         cout << "2. Update" << endl;
//         cout << "3. View" << endl;
//         cout << "4. Delete" << endl;
//          cout << "----------------------------------" << endl;
//         cout << "Enter operation = ";
//         cin >> c;

//         switch (c)
//         {
        
//         case 0:
//             cout << "exit";
//             break;

//         case 1:
//             cout << "Enter the Position = ";
//             cin >> pos2;

//             cout << "Enter the value = ";
//             cin >> val;

//             for (int i = size; i > pos2; i--)
//             {
//                 arr[i]=arr[i-1];

//             }
//                 arr[pos2] = val;
//                 size++;

//             cout << "----------------------------------" << endl;
//             for (int i = 0; i < size; i++)
//             {
//                 cout << "arr[" << i <<"] = " <<  arr[i] << endl;;
//             }
            
//              cout << "----------------------------------" << endl;
//             break;

//         case 2:
//             cout << "Enter position of the value = ";
            
//             cin >> pos;

//             cout << "Enter the value to be updated = ";
//             cin >> upd;

//             arr[pos] = upd;

//             cout << "The updated array : " << endl ;

//             for (int i = 0; i < user; i++)
//             {
//                 cout << "arr[" << i <<"] = " << arr[i] << endl;
//             }
            
//              cout << "----------------------------------" << endl;
//             break;

//         case 3:
//             cout << "The array is : " << endl;
//             for (int i = 0; i < size; i++)
//             {
//                 cout << "arr[" << i <<"] = " <<  arr[i] << endl;
//                 // cin >> arr[i];
//             }
//              cout << "----------------------------------" << endl;
//             break;

//         case 4:
//              cout << "Enter the Position = ";
//              cin >> pos2;

//             for (int i = pos2; i < size; i++)
//             {
//                 arr[i]=arr[i+1];
//             }
//                 size--;

//             cout << "----------------------------------" << endl;
//              for (int i = 0; i < size ; i++)
//             {
//                 cout << "arr[" << i <<"] = " <<  arr[i] << endl;
//             }
            
//              cout << "----------------------------------" << endl;
//             break;

//         default:
//             cout << "Enter valid number" << endl;
//              cout << "----------------------------------" << endl;
//             break;
//         }
//     } while (user!=0);
//     cout << "Exit" ;
// }
