/* Various Thresholds of MPFR, not exported.  -*- mode: C -*-

Copyright 2005-2016 Free Software Foundation, Inc.

This file is part of the GNU MPFR Library.

The GNU MPFR Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MPFR Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MPFR Library; see the file COPYING.LESSER.  If not, see
http://www.gnu.org/licenses/ or write to the Free Software Foundation, Inc.,
51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA. */

/* Generated by MPFR's tuneup.c, 2011-10-12, gcc 4.6.1 */
/* bacon.loria.fr (Core i5 2520M) with GMP 5.0.2,
   contributed by Jeremie Detrey */

#define MPFR_MULHIGH_TAB  \
 -1,0,-1,-1,-1,-1,-1,-1,0,0,0,0,8,9,10,11, \
 10,11,12,13,0,13,14,13,14,15,16,17,16,16,18,19, \
 19,19,20,19,28,28,28,28,28,28,28,28,28,28,28,30, \
 32,32,32,32,34,34,36,34,36,36,36,36,36,40,38,38, \
 40,38,40,40,56,56,56,56,56,56,56,56,56,56,56,56, \
 56,56,56,56,56,56,56,56,60,56,60,64,64,64,56,56, \
 56,64,64,56,60,64,60,64,64,64,64,68,68,64,68,84, \
 84,86,84,84,87,84,87,84,87,84,84,84,84,84,84,84, \
 87,87,86,87,87,87,92,93,92,93,93,93,93,99,96,93, \
 99,99,99,99,99,98,99,99,102,99,105,104,105,105,108,108, \
 110,108,108,111,114,114,116,117,117,117,117,117,124,124,124,124, \
 124,124,124,132,132,132,132,124,132,132,132,132,132,132,132,132, \
 140,140,140,140,123,140,124,124,124,124,132,128,132,132,132,132, \
 132,132,132,132,132,132,140,140,132,140,140,140,140,140,148,147, \
 140,148,148,147,148,148,148,156,148,156,156,156,156,156,156,155, \
 156,160,156,156,164,164,164,156,164,164,164,164,164,164,164,164, \
 164,217,220,220,220,220,220,220,220,220,220,220,220,220,220,220, \
 220,220,220,220,220,220,220,220,220,220,224,220,220,220,220,220, \
 220,220,220,220,220,220,220,220,220,224,220,220,220,224,220,220, \
 220,220,220,224,224,224,224,236,220,236,235,236,235,235,234,236, \
 236,235,236,236,235,236,236,236,236,236,236,252,236,251,236,251, \
 252,252,252,252,236,235,252,252,252,252,252,251,268,252,252,252, \
 268,251,268,268,252,252,268,268,268,268,267,268,268,268,267,268, \
 268,252,268,268,268,267,268,268,268,252,268,252,252,252,251,268, \
 252,268,252,268,268,268,268,268,267,268,268,268,268,268,268,268, \
 268,268,268,268,268,268,332,332,330,268,332,332,332,332,330,331, \
 332,332,332,332,344,331,344,344,344,344,344,332,342,332,344,332, \
 332,332,344,332,344,344,342,344,344,342,344,344,344,344,344,342, \
 344,344,344,344,344,344,344,368,344,342,344,344,368,344,344,344, \
 344,344,344,344,344,344,344,344,344,344,344,344,344,344,344,344, \
 344,344,368,344,344,368,344,363,368,367,368,368,368,368,368,366, \
 366,368,368,368,368,368,368,368,368,368,368,368,368,368,380,368, \
 368,368,368,368,368,392,392,392,392,392,392,392,392,392,392,392, \
 392,392,392,392,392,392,392,392,392,392,392,392,392,392,392,392, \
 392,391,392,392,392,392,392,416,392,416,416,416,416,412,416,392, \
 416,416,416,416,416,416,416,416,416,416,416,428,416,416,416,428, \
 416,440,416,480,480,480,480,480,480,480,504,503,504,504,504,504, \
 504,504,504,503,504,504,504,504,504,504,504,504,504,503,504,504, \
 480,504,504,504,504,504,504,480,504,488,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,504,504,504,504,504,504,504, \
 504,504,504,504,504,504,504,504,504,536,536,536,536,536,536,536, \
 536,536,536,536,535,536,536,536,536,536,536,536,536,535,536,536, \
 536,536,536,535,536,535,536,536,536,536,536,536,536,536,536,536, \
 536,568,536,536,536,536,536,536,568,536,535,536,536,536,536,536, \
 536,536,536,568,568,568,568,568,568,568,568,568,568,568,568,568, \
 568,568,568,568,568,568,568,568,568,664,664,664,664,664,664,664, \
 664,663,664,664,664,664,664,664,664,664,664,663,664,664,664,663, \
 664,663,664,664,664,664,664,664,664,663,664,664,664,663,664,664, \
 664,664,664,664,664,664,664,664,664,664,664,664,664,664,664,664, \
 664,664,664,663,664,664,664,664,664,664,664,663,664,664,664,664, \
 664,688,664,664,688,688,664,664,688,664,664,664,664,664,664,664, \
 664,680,688,688,688,688,688,688,688,688,688,688,688,688,688,688, \
 688,688,712,712,688,688,688,712,712,711,712,712,736,728,736,728, \
 728,728,736,728,736,736,736,736,728,736,736,736,728,736,736,736, \
 735,736,736,736,736,736,736,736,736,736,736,736,736,728,736,736, \
 728,736,736,736,736,735,736,736,735,736,736,736,736,735,736,736, \
 736,728,736,736,736,736,736,736,736,736,736,736,736,736,736,784, \
 736,784,783,736,784,735,784,735,784,735,736,736,736,736,736,736, \
 736,736,784,735,736,784,736,784,784,736,736,736,736,784,784,784, \
 784,784,784,783,784,784,784,736,784,784,784,784,784,784,784,784, \
 784,784,784,784,783,784,784,784,784,784,784,784,784,784,784,784, \
 784,784,784,784,784,784,784,784,784,784,784,784,784,784,784,783, \
 736,784,784,784,784,784,783,784,784,831,784,832,832,832,832,832 \
  
#define MPFR_SQRHIGH_TAB  \
 -1,0,0,0,-1,-1,-1,-1,-1,7,7,7,8,9,10,11, \
 11,11,11,11,12,13,13,15,15,15,15,15,17,17,19,19, \
 19,19,19,19,20,20,23,21,23,23,24,23,27,25,26,27, \
 26,27,27,34,34,34,34,34,34,34,34,34,34,38,34,38, \
 38,38,38,40,40,42,42,44,42,42,46,42,42,46,46,42, \
 42,42,44,44,46,46,46,46,46,46,50,50,50,50,50,50, \
 54,54,54,56,54,56,58,58,68,68,68,68,68,68,68,68, \
 68,68,68,72,68,68,68,68,68,68,72,72,76,76,76,76, \
 76,76,76,76,84,84,84,84,76,84,84,84,84,84,88,92, \
 84,84,92,92,84,76,92,88,80,80,80,80,84,84,84,84, \
 84,88,84,84,84,92,92,92,92,88,92,96,92,96,92,96, \
 92,96,100,104,100,100,96,100,100,100,108,104,117,104,117,108, \
 117,117,117,123,122,122,120,117,122,117,122,123,122,123,122,123, \
 126,123,126,129,126,129,135,123,132,135,132,135,134,135,134,135, \
 138,129,132,123,144,144,134,135,140,129,146,135,132,147,146,147, \
 146,135,138,147,138,135,140,141,144,147,146,147,146,147,150,152, \
 152,153,152,153,156,153,138,135,140,141,138,144,146,147,147,147, \
 147,146,146,146,150,150,150,147,147,159,156,159,158,156,153,159, \
 159,159,159,158,201,201,201,201,170,201,170,201,171,201,168,201, \
 200,201,201,201,201,200,201,201,200,201,201,201,201,200,201,201, \
 201,201,201,201,201,201,201,201,201,201,201,201,201,201,201,201, \
 201,201,201,201,201,201,201,201,201,213,201,212,213,225,213,225, \
 225,225,225,225,225,225,225,225,225,224,225,225,225,225,224,225, \
 225,225,225,225,225,225,225,225,225,225,225,225,237,225,237,225, \
 249,249,249,249,249,249,249,249,249,249,248,249,249,249,261,249, \
 261,249,261,261,261,249,249,261,260,261,248,261,261,273,248,249, \
 249,261,261,249,249,273,249,248,249,249,249,273,261,273,273,249, \
 273,249,273,272,273,273,261,273,273,273,273,273,273,261,273,273, \
 273,273,273,276,285,273,273,273,273,273,273,273,273,261,285,285, \
 285,285,273,261,261,285,273,297,285,273,273,273,272,273,273,273, \
 273,273,273,273,273,273,273,276,273,273,273,273,285,273,273,285, \
 351,351,351,351,351,351,297,351,351,366,351,351,351,297,366,366, \
 351,351,351,351,366,363,351,362,364,366,366,366,364,351,351,351, \
 351,351,366,366,351,366,366,366,366,366,363,366,360,363,366,366, \
 366,363,366,366,366,366,366,366,366,351,366,366,351,351,351,384, \
 366,366,366,366,366,384,366,366,363,364,366,363,366,366,366,363, \
 366,366,366,366,366,366,366,366,366,365,366,366,366,384,366,366, \
 384,366,384,366,366,366,384,366,366,366,366,366,366,384,366,402, \
 393,384,366,402,402,402,384,402,402,402,384,401,402,402,351,402, \
 351,351,402,402,402,351,402,402,366,363,365,366,366,363,366,366, \
 365,360,366,366,366,351,366,363,365,363,366,366,366,366,363,365, \
 366,366,366,366,366,366,366,366,366,366,366,363,366,366,366,363, \
 365,366,402,402,366,402,384,384,381,402,384,384,384,384,384,384, \
 402,384,387,384,402,401,402,391,402,393,399,402,402,402,401,399, \
 401,402,402,402,402,402,402,402,402,402,402,402,402,402,399,402, \
 401,402,402,402,402,402,402,402,402,438,402,438,438,437,402,437, \
 438,437,438,438,438,441,438,438,438,438,438,438,438,438,437,438, \
 438,438,456,435,437,437,438,438,438,435,438,437,438,456,456,438, \
 455,456,456,456,474,456,474,456,456,474,456,456,512,456,512,512, \
 512,512,512,512,512,512,512,474,512,512,512,512,512,512,512,512, \
 512,512,512,512,512,512,512,512,512,512,512,512,512,512,512,512, \
 512,512,512,512,512,512,512,536,512,512,536,522,512,536,536,512, \
 512,512,512,536,536,524,536,531,536,536,536,536,536,536,536,536, \
 535,512,536,534,512,536,512,536,536,535,536,536,535,534,534,536, \
 536,536,536,535,536,535,534,536,536,536,536,536,536,534,536,536, \
 536,536,536,536,536,560,560,535,536,560,536,535,584,536,536,572, \
 583,584,584,584,536,572,560,584,584,584,584,584,583,584,584,584, \
 584,583,584,570,584,584,572,584,584,584,584,584,584,583,584,584, \
 584,584,584,560,584,584,584,584,584,584,584,584,584,584,584,584, \
 584,584,584,584,584,632,696,632,584,582,696,696,696,696,584,696, \
 694,696,695,696,695,696,694,695,695,696,696,696,695,696,696,695, \
 696,696,695,696,696,696,696,696,695,695,696,695,696,695,696,695, \
 696,695,696,695,696,695,696,695,696,696,696,696,696,695,696,696, \
 695,696,696,696,696,696,696,696,696,696,696,696,696,696,696,696 \
  
#define MPFR_DIVHIGH_TAB  \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*0-15*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*16-31*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*32-47*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, /*48-63*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,41,0, /*64-79*/ \
 0,0,0,0,0,0,0,0,0,0,0,0,0,56,56,56, /*80-95*/ \
 56,56,60,58,59,56,59,59,56,59,60,58,56,64,60,60, /*96-111*/ \
 63,64,64,60,63,60,64,64,64,66,67,66,68,66,72,66, /*112-127*/ \
 67,67,71,68,68,71,71,70,76,74,74,76,76,72,75,80, /*128-143*/ \
 76,76,76,76,78,76,79,77,80,78,79,80,82,80,83,83, /*144-159*/ \
 83,85,86,91,85,88,87,85,87,90,112,91,112,89,112,112, /*160-175*/ \
 112,112,112,112,112,112,112,112,112,112,112,112,112,112,112,112, /*176-191*/ \
 112,112,118,112,112,112,112,112,112,112,120,120,112,112,112,120, /*192-207*/ \
 112,112,112,112,112,120,112,119,112,112,114,112,124,120,120,116, /*208-223*/ \
 120,118,123,128,124,120,120,123,120,128,128,120,128,134,128,127, /*224-239*/ \
 126,128,136,134,136,128,126,127,136,128,134,136,136,128,136,132, /*240-255*/ \
 136,136,134,132,136,136,135,136,136,134,136,136,136,140,144,142, /*256-271*/ \
 143,144,144,143,144,143,150,144,144,143,144,144,156,144,152,151, /*272-287*/ \
 166,149,152,152,156,152,168,160,152,168,168,168,152,160,168,168, /*288-303*/ \
 168,172,166,168,168,180,166,166,165,165,168,168,168,164,174,167, /*304-319*/ \
 168,166,174,168,168,168,174,176,180,172,174,182,180,172,184,178, /*320-335*/ \
 184,183,184,186,182,182,183,185,174,224,176,224,224,224,196,191, /*336-351*/ \
 192,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224, /*352-367*/ \
 224,224,224,224,224,224,224,224,224,224,228,224,224,224,233,224, /*368-383*/ \
 224,224,224,240,224,232,224,224,224,224,224,224,224,224,224,224, /*384-399*/ \
 224,224,224,224,228,224,224,224,224,224,224,224,224,225,224,224, /*400-415*/ \
 224,224,224,224,224,224,224,224,233,232,224,240,224,240,224,223, /*416-431*/ \
 224,224,224,224,224,232,224,232,228,233,224,224,228,240,230,240, /*432-447*/ \
 240,240,242,239,240,247,240,239,248,240,239,242,256,232,256,254, /*448-463*/ \
 256,256,256,256,256,256,256,256,256,240,264,256,264,264,256,263, /*464-479*/ \
 272,272,256,248,254,272,256,256,254,256,256,255,254,272,272,256, /*480-495*/ \
 256,272,264,256,255,271,272,264,256,272,272,272,272,256,272,272, /*496-511*/ \
 278,280,272,272,280,287,280,280,287,280,270,272,272,264,272,272, /*512-527*/ \
 271,269,270,280,272,272,271,272,272,270,272,272,272,272,288,273, /*528-543*/ \
 278,276,288,286,280,288,287,285,280,286,288,280,280,288,288,296, /*544-559*/ \
 288,288,288,289,288,288,287,287,288,296,288,288,296,302,312,294, /*560-575*/ \
 310,304,303,304,304,312,303,320,304,300,312,296,305,310,304,304, /*576-591*/ \
 304,302,303,312,302,304,304,304,302,336,304,304,328,311,312,328, /*592-607*/ \
 310,312,316,336,336,320,312,320,336,320,319,336,336,328,328,325, /*608-623*/ \
 320,328,328,336,320,336,320,324,336,348,320,336,343,320,336,336, /*624-639*/ \
 336,334,335,344,341,328,342,336,328,335,336,336,336,336,335,336, /*640-655*/ \
 336,343,336,344,336,336,348,360,344,359,344,360,360,360,344,348, /*656-671*/ \
 344,347,348,360,348,360,360,360,360,367,368,368,448,360,448,372, /*672-687*/ \
 360,360,448,368,448,448,448,448,448,448,448,448,448,448,448,448, /*688-703*/ \
 448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448, /*704-719*/ \
 448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448, /*720-735*/ \
 448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448, /*736-751*/ \
 448,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448, /*752-767*/ \
 448,448,448,448,448,448,448,448,448,448,448,448,448,467,448,468, /*768-783*/ \
 448,468,448,466,448,464,468,448,464,464,448,448,448,448,464,448, /*784-799*/ \
 480,448,448,448,448,448,448,448,448,448,448,448,448,448,448,448, /*800-815*/ \
 448,448,448,448,448,448,448,448,448,448,480,448,448,448,447,448, /*816-831*/ \
 448,448,448,464,448,448,448,448,448,448,448,448,448,447,448,448, /*832-847*/ \
 448,448,448,448,447,448,448,448,448,456,448,448,448,456,448,448, /*848-863*/ \
 448,448,448,448,448,448,448,448,448,448,464,464,448,467,448,448, /*864-879*/ \
 448,448,448,464,448,447,468,464,448,464,464,448,448,468,472,472, /*880-895*/ \
 466,462,464,469,468,464,463,480,472,479,496,480,472,512,472,479, /*896-911*/ \
 512,464,495,512,496,495,480,496,488,472,492,512,512,480,512,479, /*912-927*/ \
 512,480,504,480,480,496,512,480,472,480,512,496,480,512,536,496, /*928-943*/ \
 512,512,512,512,496,512,512,515,496,480,512,496,512,480,510,543, /*944-959*/ \
 512,496,512,496,528,528,496,512,512,528,527,496,512,508,512,528, /*960-975*/ \
 512,512,512,512,512,512,512,512,528,528,512,512,512,512,528,528, /*976-991*/ \
 512,528,526,527,528,511,508,511,512,512,528,527,528,528,510,512, /*992-1007*/ \
 528,544,544,536,536,520,511,536,536,543,512,528,544,512,542,543 /*1008-1023*/ \
  
#define MPFR_MUL_THRESHOLD 13 /* limbs */
#define MPFR_SQR_THRESHOLD 16 /* limbs */
#define MPFR_DIV_THRESHOLD 1 /* limbs */
#define MPFR_EXP_2_THRESHOLD 905 /* bits */
#define MPFR_EXP_THRESHOLD 10417 /* bits */
#define MPFR_SINCOS_THRESHOLD 22793 /* bits */
#define MPFR_AI_THRESHOLD1 -12218 /* threshold for negative input of mpfr_ai */
#define MPFR_AI_THRESHOLD2 1425
#define MPFR_AI_THRESHOLD3 19221
/* Tuneup completed successfully, took 620 seconds */

