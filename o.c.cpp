#include <iostream>

char input[1000], output[1000], oc[63] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int l = 0, n = 0, v = 10, o = 0;

void wtos(){
	std::string ocs[63] = {"{.", "[<<<<.", "[<<<.", "[<<.", "[<.", "[.", "<<<<.", "<<<.", "<<.", "<.", ".", ">.", ">>.", ">>>.", ">>>>.", "].", "]>.", "]>>.", "]>>>.", "]>>>>.", "}.", "}>.", "}>>.", "}>>>.", "}>>>>.", "}].", "}]>.", "}]>>.", "}]>>>.", "}]>>>>.", "}}.", "}}>.", "}}>>.", "}}>>>.", "}}>>>>.", "}}].", "}}]>.", "}}]>>.", "}}]>>>.", "}}]>>>>.", "}}}.", "}}}>.", "}}}>>.", "}}}>>>.", "}}}>>>>.", "}}}].", "}}}]>.", "}}}]>>.", "}}}]>>>.", "}}}]>>>>.", "}}}}.", "}}}}>.", "}}}}>>.", "}}}}>>>.", "}}}}>>>>.", "}}}}].", "}}}}]>.", "}}}}]>>.", "}}}}]>>>.", "}}}}]>>>>.", ").", ")>.", ")>>."};
	oc[10] = '_';
				
	std::cout << "Input: ";
	std::cin >> input;	
	std::cout << "++++++++++++++++++++" << std::endl;
	std::cout << "Output: ";
	
	for(l = 0; l <= 62; ++l){
		if(input[o] != oc[n]){
			++n;
		}else if(input[o] == oc[n]){
			std::cout << ocs[n];
			n = 0;
			l = 0;
			++o;
		}
	}
}

void stow(){
	std::cout << "Input: ";
    std::cin >> input;

    for(l = 0; l <= 100; l++){
        if(input[n] != '.'){
            if(input[n] == '<'){ --v;
            }else if(input[n] == '['){ v -= 5;
            }else if(input[n] == '{'){ v -= 10;
            }else if(input[n] == '('){ v -= 50;
            }else if(input[n] == '>'){ ++v;
            }else if(input[n] == ']'){ v += 5;
            }else if(input[n] == '}'){ v += 10;
            }else if(input[n] == ')'){ v += 50; }
            if(v <= -1){ v += 63;
            }else if(v >= 63){ v -= 63; }
            ++n;
        }else if(input[n] == '.'){
            output[o] = oc[v];
            v = 10;
            l = 0;
            ++n;
            ++o;
        }
    }
    std::cout << "++++++++++++++++++++" << std::endl;
    std::cout << "Output: ";
    
    for(l = 0; l <= o; ++l){
        std::cout << output[l];
    }
}

int main(){
	std::string wors;

	std::cout << "< ";
	std::cin >> wors;

	if(wors == "<."){ wtos();
	}else if(wors == "<<."){ stow();
	}else if(wors == "1" || wors == "2"){ std::cout << "> Do it in symbols.";
    	}else{ std::cout << "> 1 or 2."; }
    return 0;
}
