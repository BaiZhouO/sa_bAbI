#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_1;                            // Tag.BODY
    char entity_7[60];                       // Tag.BODY
    char entity_8[66];                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    entity_1 = 83;                           // Tag.BODY
    entity_8[entity_1] = 'F';                // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_6;                            // Tag.BODY
    entity_5 = 12;                           // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    if(entity_6 < entity_5){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_6 = 50;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_7[entity_6] = '5';                // Tag.BUFWRITE_COND_SAFE
    int *entity_2;                           // Tag.POINTER_DEC
    entity_2 = &entity_6;                    // Tag.POINTER_DEC
    int entity_0;                            // Tag.BODY
    char *entity_9 = (char *)(entity_2 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    char entity_3[5];                        // Tag.BODY
    entity_0 = 26;                           // Tag.BODY
    entity_3[entity_0] = 'H';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER