```

#include <iostream>
#include <sstream>

int main()
{
    for( std::string string; std::getline( std::cin, string ); ) {
        int numbers[ 10 ];
        std::istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) {
            if( !( stream >> numbers[ i ] ) ) {
                failure = true;
                break;
            }
        }
        int a=numbers[0];
        for( int i = 0; i < 10; ++i ){
        	if (numbers[i]>a){
        		a=numbers[i];
        	}
        }
       
        
        if( !failure ) {
            std::cout<< a;
        }
        else {
            std::cout << "An error has occured while reading numbers from line" << std::endl;
        }
        return 0;
    }
}
```
