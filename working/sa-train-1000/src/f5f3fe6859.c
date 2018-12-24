#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_4[0];                        // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_2 = 4;                            // Tag.BODY
    int entity_7;                            // Tag.BODY
    entity_7 = rand();                       // Tag.BODY
    if(entity_7 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_7 = 48;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_7] = 'a';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_9;                           // Tag.POINTER_DEC
    entity_9 = &entity_7;                    // Tag.POINTER_DEC
    int entity_5;                            // Tag.BODY
    char entity_8[42];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_5 = 3;                            // Tag.BODY
    char entity_1[42];                       // Tag.BODY
    entity_0 = 21;                           // Tag.BODY
    char *entity_6 = (char *)(entity_9 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_8[entity_0] = 'Z';                // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_5] = 'u';                // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER