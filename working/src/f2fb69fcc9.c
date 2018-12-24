#include <stdlib.h>                          // Tag.OTHER
int main()                                   // Tag.OTHER
{                                            // Tag.OTHER
    int entity_5;                            // Tag.BODY
    int entity_2;                            // Tag.BODY
    entity_5 = rand();                       // Tag.BODY
    char entity_3[2];                        // Tag.BODY
    entity_2 = 66;                           // Tag.BODY
    if(entity_5 < entity_2){                 // Tag.BODY
    } else {                                 // Tag.BODY
    entity_5 = 97;                           // Tag.BODY
    }                                        // Tag.BODY
    entity_3[entity_5] = 'J';                // Tag.BUFWRITE_COND_UNSAFE
    int *entity_1;                           // Tag.POINTER_DEC
    entity_1 = &entity_5;                    // Tag.POINTER_DEC
    char *entity_8 = (char *)(entity_1 + 3); // Tag.INCORRECT_POINTER_SCALING_WEAKNESS
    return 0;                                // Tag.BODY
}                                            // Tag.OTHER