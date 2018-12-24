#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    char entity_1[77];                       // Tag.BODY
    int entity_4;                            // Tag.BODY
    int entity_8;                            // Tag.BODY
    entity_4 = rand();                       // Tag.BODY
    char entity_9[80];                       // Tag.BODY
    entity_5 = 30;                           // Tag.BODY
    entity_8 = 48;                           // Tag.BODY
    entity_1[entity_8] = 'y';                // Tag.BUFWRITE_TAUT_SAFE
    if(entity_4 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_4 = 8;                            // Tag.BODY
    }                                        // Tag.BODY
    entity_9[entity_4] = 'M';                // Tag.BUFWRITE_COND_SAFE
    int *entity_0;                           // Tag.POINTER_DEC
    entity_0 = &entity_4;                    // Tag.POINTER_DEC
    int entity_6;                            // Tag.BODY
    entity_6 = 97;                           // Tag.BODY
    char *entity_3 = (char *)(entity_0 + 2); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_7[93];                       // Tag.BODY
    entity_7[entity_6] = '5';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER