#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_2;                            // Tag.BODY
    int entity_6;                            // Tag.BODY
    entity_6 = rand();                       // Tag.BODY
    int entity_5;                            // Tag.BODY
    char entity_4[6];                        // Tag.BODY
    char entity_7[62];                       // Tag.BODY
    entity_5 = 35;                           // Tag.BODY
    entity_2 = 80;                           // Tag.BODY
    if(entity_6 < entity_2){                 // Tag.BODY
    entity_7[entity_5] = 'C';                // Tag.BUFWRITE_TAUT_SAFE
    } else {                                 // Tag.BODY
    entity_6 = 20;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_4[entity_6] = 'R';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_6;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 1); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER