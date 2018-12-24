#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    char entity_2[3];                        // Tag.BODY
    int entity_6;                            // Tag.BODY
    int entity_9;                            // Tag.BODY
    entity_9 = 12;                           // Tag.BODY
    entity_2[entity_9] = 'a';                // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[27];                       // Tag.BODY
    int entity_0;                            // Tag.BODY
    entity_6 = 41;                           // Tag.BODY
    entity_0 = rand();                       // Tag.BODY
    if(entity_0 < entity_6){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_0 = 77;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_0] = '0';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_8;                           // Tag.POINTER_DEC
    entity_8 = &entity_0;                    // Tag.POINTER_DEC
    char entity_1[72];                       // Tag.BODY
    int entity_3;                            // Tag.BODY
    char *entity_7 = (char *)(entity_8 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    entity_3 = 91;                           // Tag.BODY
    entity_1[entity_3] = 'A';                // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER