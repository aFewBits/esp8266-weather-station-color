// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const char OpenSansPlain14[] PROGMEM = {
  0x0D, // Width: 13
  0x14, // Height: 20
  0x20, // First Char: 32
  0xE0, // Numbers of Chars: 224

  // Jump Table:
  0xFF, 0xFF, 0x00, 0x04,  // 32:65535
  0x00, 0x00, 0x05, 0x03,  // 33:0
  0x00, 0x05, 0x0D, 0x06,  // 34:5
  0x00, 0x12, 0x1A, 0x09,  // 35:18
  0x00, 0x2C, 0x14, 0x08,  // 36:44
  0x00, 0x40, 0x20, 0x0C,  // 37:64
  0x00, 0x60, 0x1D, 0x0B,  // 38:96
  0x00, 0x7D, 0x05, 0x03,  // 39:125
  0x00, 0x82, 0x0C, 0x04,  // 40:130
  0x00, 0x8E, 0x08, 0x04,  // 41:142
  0x00, 0x96, 0x13, 0x08,  // 42:150
  0x00, 0xA9, 0x17, 0x09,  // 43:169
  0x00, 0xC0, 0x06, 0x03,  // 44:192
  0x00, 0xC6, 0x0B, 0x05,  // 45:198
  0x00, 0xD1, 0x05, 0x03,  // 46:209
  0x00, 0xD6, 0x0D, 0x05,  // 47:214
  0x00, 0xE3, 0x17, 0x09,  // 48:227
  0x00, 0xFA, 0x0E, 0x08,  // 49:250
  0x01, 0x08, 0x17, 0x09,  // 50:264
  0x01, 0x1F, 0x14, 0x08,  // 51:287
  0x01, 0x33, 0x17, 0x09,  // 52:307
  0x01, 0x4A, 0x14, 0x08,  // 53:330
  0x01, 0x5E, 0x14, 0x08,  // 54:350
  0x01, 0x72, 0x16, 0x09,  // 55:370
  0x01, 0x88, 0x17, 0x09,  // 56:392
  0x01, 0x9F, 0x14, 0x08,  // 57:415
  0x01, 0xB3, 0x05, 0x03,  // 58:435
  0x01, 0xB8, 0x05, 0x03,  // 59:440
  0x01, 0xBD, 0x17, 0x08,  // 60:445
  0x01, 0xD4, 0x14, 0x08,  // 61:468
  0x01, 0xE8, 0x14, 0x08,  // 62:488
  0x01, 0xFC, 0x11, 0x07,  // 63:508
  0x02, 0x0D, 0x23, 0x0D,  // 64:525
  0x02, 0x30, 0x1A, 0x09,  // 65:560
  0x02, 0x4A, 0x17, 0x09,  // 66:586
  0x02, 0x61, 0x17, 0x09,  // 67:609
  0x02, 0x78, 0x1A, 0x0A,  // 68:632
  0x02, 0x92, 0x11, 0x07,  // 69:658
  0x02, 0xA3, 0x11, 0x07,  // 70:675
  0x02, 0xB4, 0x1A, 0x0A,  // 71:692
  0x02, 0xCE, 0x1A, 0x0A,  // 72:718
  0x02, 0xE8, 0x05, 0x03,  // 73:744
  0x02, 0xED, 0x09, 0x04,  // 74:749
  0x02, 0xF6, 0x17, 0x08,  // 75:758
  0x03, 0x0D, 0x11, 0x07,  // 76:781
  0x03, 0x1E, 0x20, 0x0C,  // 77:798
  0x03, 0x3E, 0x1A, 0x0A,  // 78:830
  0x03, 0x58, 0x1D, 0x0B,  // 79:856
  0x03, 0x75, 0x14, 0x08,  // 80:885
  0x03, 0x89, 0x1E, 0x0B,  // 81:905
  0x03, 0xA7, 0x14, 0x08,  // 82:935
  0x03, 0xBB, 0x14, 0x08,  // 83:955
  0x03, 0xCF, 0x16, 0x09,  // 84:975
  0x03, 0xE5, 0x1A, 0x0A,  // 85:997
  0x03, 0xFF, 0x16, 0x08,  // 86:1023
  0x04, 0x15, 0x25, 0x0D,  // 87:1045
  0x04, 0x3A, 0x17, 0x08,  // 88:1082
  0x04, 0x51, 0x13, 0x07,  // 89:1105
  0x04, 0x64, 0x17, 0x09,  // 90:1124
  0x04, 0x7B, 0x0C, 0x04,  // 91:1147
  0x04, 0x87, 0x0E, 0x05,  // 92:1159
  0x04, 0x95, 0x09, 0x04,  // 93:1173
  0x04, 0x9E, 0x14, 0x08,  // 94:1182
  0x04, 0xB2, 0x12, 0x06,  // 95:1202
  0x04, 0xC4, 0x0D, 0x08,  // 96:1220
  0x04, 0xD1, 0x14, 0x08,  // 97:1233
  0x04, 0xE5, 0x17, 0x09,  // 98:1253
  0x04, 0xFC, 0x14, 0x07,  // 99:1276
  0x05, 0x10, 0x17, 0x09,  // 100:1296
  0x05, 0x27, 0x14, 0x08,  // 101:1319
  0x05, 0x3B, 0x0D, 0x05,  // 102:1339
  0x05, 0x48, 0x18, 0x09,  // 103:1352
  0x05, 0x60, 0x14, 0x08,  // 104:1376
  0x05, 0x74, 0x05, 0x03,  // 105:1396
  0x05, 0x79, 0x06, 0x03,  // 106:1401
  0x05, 0x7F, 0x14, 0x07,  // 107:1407
  0x05, 0x93, 0x05, 0x03,  // 108:1427
  0x05, 0x98, 0x23, 0x0D,  // 109:1432
  0x05, 0xBB, 0x14, 0x08,  // 110:1467
  0x05, 0xCF, 0x17, 0x09,  // 111:1487
  0x05, 0xE6, 0x17, 0x09,  // 112:1510
  0x05, 0xFD, 0x18, 0x09,  // 113:1533
  0x06, 0x15, 0x0D, 0x05,  // 114:1557
  0x06, 0x22, 0x11, 0x07,  // 115:1570
  0x06, 0x33, 0x0B, 0x05,  // 116:1587
  0x06, 0x3E, 0x14, 0x08,  // 117:1598
  0x06, 0x52, 0x14, 0x07,  // 118:1618
  0x06, 0x66, 0x1F, 0x0B,  // 119:1638
  0x06, 0x85, 0x14, 0x07,  // 120:1669
  0x06, 0x99, 0x13, 0x07,  // 121:1689
  0x06, 0xAC, 0x14, 0x07,  // 122:1708
  0x06, 0xC0, 0x0F, 0x05,  // 123:1728
  0x06, 0xCF, 0x0C, 0x07,  // 124:1743
  0x06, 0xDB, 0x0E, 0x05,  // 125:1755
  0x06, 0xE9, 0x17, 0x09,  // 126:1769
  0x07, 0x00, 0x14, 0x08,  // 127:1792
  0x07, 0x14, 0x14, 0x08,  // 128:1812
  0x07, 0x28, 0x14, 0x08,  // 129:1832
  0x07, 0x3C, 0x14, 0x08,  // 130:1852
  0x07, 0x50, 0x14, 0x08,  // 131:1872
  0x07, 0x64, 0x14, 0x08,  // 132:1892
  0x07, 0x78, 0x14, 0x08,  // 133:1912
  0x07, 0x8C, 0x14, 0x08,  // 134:1932
  0x07, 0xA0, 0x14, 0x08,  // 135:1952
  0x07, 0xB4, 0x14, 0x08,  // 136:1972
  0x07, 0xC8, 0x14, 0x08,  // 137:1992
  0x07, 0xDC, 0x14, 0x08,  // 138:2012
  0x07, 0xF0, 0x14, 0x08,  // 139:2032
  0x08, 0x04, 0x14, 0x08,  // 140:2052
  0x08, 0x18, 0x14, 0x08,  // 141:2072
  0x08, 0x2C, 0x14, 0x08,  // 142:2092
  0x08, 0x40, 0x14, 0x08,  // 143:2112
  0x08, 0x54, 0x14, 0x08,  // 144:2132
  0x08, 0x68, 0x14, 0x08,  // 145:2152
  0x08, 0x7C, 0x14, 0x08,  // 146:2172
  0x08, 0x90, 0x14, 0x08,  // 147:2192
  0x08, 0xA4, 0x14, 0x08,  // 148:2212
  0x08, 0xB8, 0x14, 0x08,  // 149:2232
  0x08, 0xCC, 0x14, 0x08,  // 150:2252
  0x08, 0xE0, 0x14, 0x08,  // 151:2272
  0x08, 0xF4, 0x14, 0x08,  // 152:2292
  0x09, 0x08, 0x14, 0x08,  // 153:2312
  0x09, 0x1C, 0x14, 0x08,  // 154:2332
  0x09, 0x30, 0x14, 0x08,  // 155:2352
  0x09, 0x44, 0x14, 0x08,  // 156:2372
  0x09, 0x58, 0x14, 0x08,  // 157:2392
  0x09, 0x6C, 0x14, 0x08,  // 158:2412
  0x09, 0x80, 0x14, 0x08,  // 159:2432
  0xFF, 0xFF, 0x00, 0x04,  // 160:65535
  0x09, 0x94, 0x06, 0x03,  // 161:2452
  0x09, 0x9A, 0x14, 0x08,  // 162:2458
  0x09, 0xAE, 0x17, 0x09,  // 163:2478
  0x09, 0xC5, 0x14, 0x08,  // 164:2501
  0x09, 0xD9, 0x13, 0x07,  // 165:2521
  0x09, 0xEC, 0x0C, 0x07,  // 166:2540
  0x09, 0xF8, 0x11, 0x07,  // 167:2552
  0x0A, 0x09, 0x10, 0x08,  // 168:2569
  0x0A, 0x19, 0x20, 0x0C,  // 169:2585
  0x0A, 0x39, 0x0E, 0x06,  // 170:2617
  0x0A, 0x47, 0x14, 0x07,  // 171:2631
  0x0A, 0x5B, 0x14, 0x08,  // 172:2651
  0x0A, 0x6F, 0x0B, 0x05,  // 173:2671
  0x0A, 0x7A, 0x20, 0x0C,  // 174:2682
  0x0A, 0x9A, 0x13, 0x07,  // 175:2714
  0x0A, 0xAD, 0x0E, 0x06,  // 176:2733
  0x0A, 0xBB, 0x17, 0x09,  // 177:2747
  0x0A, 0xD2, 0x0E, 0x06,  // 178:2770
  0x0A, 0xE0, 0x0E, 0x06,  // 179:2784
  0x0A, 0xEE, 0x0D, 0x08,  // 180:2798
  0x0A, 0xFB, 0x14, 0x08,  // 181:2811
  0x0B, 0x0F, 0x18, 0x0A,  // 182:2831
  0x0B, 0x27, 0x05, 0x03,  // 183:2855
  0x0B, 0x2C, 0x09, 0x04,  // 184:2860
  0x0B, 0x35, 0x08, 0x05,  // 185:2869
  0x0B, 0x3D, 0x0E, 0x06,  // 186:2877
  0x0B, 0x4B, 0x11, 0x07,  // 187:2891
  0x0B, 0x5C, 0x1D, 0x0B,  // 188:2908
  0x0B, 0x79, 0x1D, 0x0B,  // 189:2937
  0x0B, 0x96, 0x1D, 0x0A,  // 190:2966
  0x0B, 0xB3, 0x12, 0x07,  // 191:2995
  0x0B, 0xC5, 0x1A, 0x09,  // 192:3013
  0x0B, 0xDF, 0x1A, 0x09,  // 193:3039
  0x0B, 0xF9, 0x1A, 0x09,  // 194:3065
  0x0C, 0x13, 0x1A, 0x09,  // 195:3091
  0x0C, 0x2D, 0x17, 0x09,  // 196:3117
  0x0C, 0x44, 0x1A, 0x09,  // 197:3140
  0x0C, 0x5E, 0x20, 0x0C,  // 198:3166
  0x0C, 0x7E, 0x17, 0x09,  // 199:3198
  0x0C, 0x95, 0x11, 0x07,  // 200:3221
  0x0C, 0xA6, 0x11, 0x07,  // 201:3238
  0x0C, 0xB7, 0x11, 0x07,  // 202:3255
  0x0C, 0xC8, 0x14, 0x08,  // 203:3272
  0x0C, 0xDC, 0x05, 0x03,  // 204:3292
  0x0C, 0xE1, 0x07, 0x03,  // 205:3297
  0x0C, 0xE8, 0x07, 0x03,  // 206:3304
  0x0C, 0xEF, 0x0A, 0x05,  // 207:3311
  0x0C, 0xF9, 0x1D, 0x0B,  // 208:3321
  0x0D, 0x16, 0x1A, 0x0A,  // 209:3350
  0x0D, 0x30, 0x1D, 0x0B,  // 210:3376
  0x0D, 0x4D, 0x1D, 0x0B,  // 211:3405
  0x0D, 0x6A, 0x1D, 0x0B,  // 212:3434
  0x0D, 0x87, 0x1D, 0x0B,  // 213:3463
  0x0D, 0xA4, 0x1D, 0x0B,  // 214:3492
  0x0D, 0xC1, 0x14, 0x08,  // 215:3521
  0x0D, 0xD5, 0x1D, 0x0B,  // 216:3541
  0x0D, 0xF2, 0x1A, 0x0A,  // 217:3570
  0x0E, 0x0C, 0x1A, 0x0A,  // 218:3596
  0x0E, 0x26, 0x1A, 0x0A,  // 219:3622
  0x0E, 0x40, 0x1A, 0x0A,  // 220:3648
  0x0E, 0x5A, 0x13, 0x07,  // 221:3674
  0x0E, 0x6D, 0x14, 0x08,  // 222:3693
  0x0E, 0x81, 0x17, 0x09,  // 223:3713
  0x0E, 0x98, 0x14, 0x08,  // 224:3736
  0x0E, 0xAC, 0x14, 0x08,  // 225:3756
  0x0E, 0xC0, 0x14, 0x08,  // 226:3776
  0x0E, 0xD4, 0x14, 0x08,  // 227:3796
  0x0E, 0xE8, 0x14, 0x08,  // 228:3816
  0x0E, 0xFC, 0x14, 0x08,  // 229:3836
  0x0F, 0x10, 0x23, 0x0D,  // 230:3856
  0x0F, 0x33, 0x14, 0x07,  // 231:3891
  0x0F, 0x47, 0x14, 0x08,  // 232:3911
  0x0F, 0x5B, 0x14, 0x08,  // 233:3931
  0x0F, 0x6F, 0x14, 0x08,  // 234:3951
  0x0F, 0x83, 0x14, 0x08,  // 235:3971
  0x0F, 0x97, 0x05, 0x03,  // 236:3991
  0x0F, 0x9C, 0x07, 0x03,  // 237:3996
  0x0F, 0xA3, 0x07, 0x03,  // 238:4003
  0x0F, 0xAA, 0x07, 0x03,  // 239:4010
  0x0F, 0xB1, 0x17, 0x09,  // 240:4017
  0x0F, 0xC8, 0x14, 0x08,  // 241:4040
  0x0F, 0xDC, 0x17, 0x09,  // 242:4060
  0x0F, 0xF3, 0x17, 0x09,  // 243:4083
  0x10, 0x0A, 0x17, 0x09,  // 244:4106
  0x10, 0x21, 0x17, 0x09,  // 245:4129
  0x10, 0x38, 0x17, 0x09,  // 246:4152
  0x10, 0x4F, 0x14, 0x07,  // 247:4175
  0x10, 0x63, 0x17, 0x09,  // 248:4195
  0x10, 0x7A, 0x14, 0x08,  // 249:4218
  0x10, 0x8E, 0x14, 0x08,  // 250:4238
  0x10, 0xA2, 0x14, 0x08,  // 251:4258
  0x10, 0xB6, 0x14, 0x08,  // 252:4278
  0x10, 0xCA, 0x13, 0x07,  // 253:4298
  0x10, 0xDD, 0x17, 0x09,  // 254:4317
  0x10, 0xF4, 0x14, 0x08,  // 255:4340

  // Font Data:
  0x00,0x00,0x00,0xE0,0x6F, // 33
  0x00,0x00,0x00,0xE0,0x01,0x00,0x00,0x00,0x00,0x20,0x01,0x00,0xE0, // 34
  0x00,0x08,0x00,0x00,0x09,0x00,0x00,0x7D,0x00,0xE0,0x0B,0x00,0x00,0x09,0x00,0x00,0x7D,0x00,0xE0,0x0B,0x00,0x00,0x09,0x00,0x00,0x01,  // 35
  0x00,0x00,0x00,0xC0,0x21,0x00,0x20,0x22,0x00,0xF0,0xFF,0x00,0x20,0x22,0x00,0x00,0x24,0x00,0x40,0x1C,  // 36
  0x00,0x00,0x00,0xC0,0x03,0x00,0x20,0x04,0x00,0x20,0x44,0x00,0xC0,0x33,0x00,0x00,0x0C,0x00,0x00,0x03,0x00,0xC0,0x3E,0x00,0x20,0x41,0x00,0x00,0x41,0x00,0x00,0x3E,  // 37
  0x00,0x00,0x00,0x00,0x38,0x00,0xC0,0x65,0x00,0x20,0x43,0x00,0x20,0x46,0x00,0x20,0x4D,0x00,0xC0,0x38,0x00,0x00,0x30,0x00,0x00,0x38,0x00,0x00,0x44, // 38
  0x00,0x00,0x00,0xE0,0x01, // 39
  0x00,0x00,0x00,0x00,0x7F,0x00,0xC0,0x80,0x01,0x20,0x00,0x02,  // 40
  0x20,0x00,0x02,0xC0,0x80,0x01,0x00,0x7F,  // 41
  0x00,0x00,0x00,0x40,0x00,0x00,0x80,0x03,0x00,0xF0,0x01,0x00,0x80,0x01,0x00,0x40,0x02,0x00,0x40, // 42
  0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0xC0,0x1F,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02, // 43
  0x00,0x00,0x00,0x00,0xC0,0x01,  // 44
  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08, // 45
  0x00,0x00,0x00,0x00,0x60, // 46
  0x00,0x40,0x00,0x00,0x38,0x00,0x00,0x0E,0x00,0xC0,0x01,0x00,0x20, // 47
  0x00,0x00,0x00,0x80,0x1F,0x00,0x40,0x20,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x40,0x20,0x00,0x80,0x1F, // 48
  0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x60,0x00,0x00,0xE0,0x7F,  // 49
  0x00,0x00,0x00,0x40,0x40,0x00,0x20,0x60,0x00,0x20,0x50,0x00,0x20,0x48,0x00,0x20,0x46,0x00,0xC0,0x41,0x00,0x00,0x40, // 50
  0x00,0x00,0x00,0x40,0x40,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x65,0x00,0xC0,0x3D,  // 51
  0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x1C,0x00,0x00,0x13,0x00,0x80,0x11,0x00,0x40,0x10,0x00,0xE0,0x7F,0x00,0x00,0x10, // 52
  0x00,0x00,0x00,0xC0,0x41,0x00,0x60,0x41,0x00,0x20,0x41,0x00,0x20,0x41,0x00,0x20,0x23,0x00,0x00,0x1E,  // 53
  0x00,0x00,0x00,0x80,0x1F,0x00,0x40,0x62,0x00,0x20,0x41,0x00,0x20,0x41,0x00,0x20,0x63,0x00,0x00,0x3E,  // 54
  0x00,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,0x60,0x00,0x20,0x18,0x00,0x20,0x06,0x00,0xE0,0x01,0x00,0x60,  // 55
  0x00,0x00,0x00,0xC0,0x39,0x00,0x20,0x66,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x46,0x00,0xC0,0x65,0x00,0x00,0x38, // 56
  0x00,0x00,0x00,0xC0,0x03,0x00,0x60,0x44,0x00,0x20,0x44,0x00,0x20,0x44,0x00,0x60,0x32,0x00,0x80,0x0F,  // 57
  0x00,0x00,0x00,0x80,0x61, // 58
  0x00,0x00,0x01,0x80,0xC1, // 59
  0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x06,0x00,0x00,0x05,0x00,0x00,0x09,0x00,0x80,0x08,0x00,0x80,0x10,0x00,0x40,0x10, // 60
  0x00,0x00,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,0x00,0x00,0x09,  // 61
  0x00,0x00,0x00,0x40,0x10,0x00,0x80,0x10,0x00,0x80,0x08,0x00,0x00,0x09,0x00,0x00,0x05,0x00,0x00,0x06,  // 62
  0x00,0x00,0x00,0x20,0x00,0x00,0x20,0x6C,0x00,0x20,0x02,0x00,0x20,0x03,0x00,0xC0,0x01, // 63
  0x00,0x00,0x00,0x00,0x1F,0x00,0x80,0x61,0x00,0x40,0x40,0x00,0x60,0x8F,0x00,0xA0,0x91,0x00,0xA0,0x90,0x00,0xA0,0x90,0x00,0xA0,0x8F,0x00,0x40,0x10,0x00,0xC0,0x10,0x00,0x00,0x0F, // 64
  0x00,0x40,0x00,0x00,0x38,0x00,0x00,0x0E,0x00,0xC0,0x09,0x00,0x60,0x08,0x00,0xC0,0x09,0x00,0x00,0x0E,0x00,0x00,0x70,0x00,0x00,0x40,  // 65
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x46,0x00,0xC0,0x65,0x00,0x00,0x38, // 66
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x60,0x60,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40, // 67
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x40,0x20,0x00,0xC0,0x30,0x00,0x80,0x0F,  // 68
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42, // 69
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x02,0x00,0x20,0x02,0x00,0x20,0x02,0x00,0x20,0x02, // 70
  0x00,0x00,0x00,0x00,0x1F,0x00,0xC0,0x30,0x00,0x40,0x60,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x7E,  // 71
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0xE0,0x7F,  // 72
  0x00,0x00,0x00,0xE0,0x7F, // 73
  0x00,0x00,0x02,0x00,0x00,0x02,0xE0,0xFF,0x01, // 74
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x00,0x06,0x00,0x00,0x07,0x00,0x80,0x0D,0x00,0xC0,0x10,0x00,0x60,0x60,0x00,0x00,0x40, // 75
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40, // 76
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x60,0x00,0x00,0x80,0x03,0x00,0x00,0x0E,0x00,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x0C,0x00,0x80,0x03,0x00,0x60,0x00,0x00,0xE0,0x7F,  // 77
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x60,0x00,0x00,0x80,0x01,0x00,0x00,0x02,0x00,0x00,0x0C,0x00,0x00,0x10,0x00,0x00,0x60,0x00,0xE0,0x7F,  // 78
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x60,0x60,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x60,0x60,0x00,0xC0,0x30,0x00,0x80,0x1F, // 79
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x04,0x00,0x20,0x04,0x00,0x20,0x04,0x00,0x60,0x06,0x00,0xC0,0x03,  // 80
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x60,0x60,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0xC0,0x00,0x60,0xE0,0x01,0xC0,0x30,0x03,0x80,0x1F,0x02,  // 81
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x04,0x00,0x20,0x04,0x00,0x20,0x0C,0x00,0x60,0x1E,0x00,0xC0,0x63,  // 82
  0x00,0x00,0x00,0xC0,0x41,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x44,0x00,0x20,0x64,0x00,0x20,0x38,  // 83
  0x00,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0xE0,0x7F,0x00,0x20,0x00,0x00,0x20,0x00,0x00,0x20,  // 84
  0x00,0x00,0x00,0xE0,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xE0,0x1F,  // 85
  0x20,0x00,0x00,0xC0,0x01,0x00,0x00,0x0E,0x00,0x00,0x78,0x00,0x00,0x70,0x00,0x00,0x1E,0x00,0x80,0x03,0x00,0x60,  // 86
  0x20,0x00,0x00,0xE0,0x03,0x00,0x00,0x3E,0x00,0x00,0x60,0x00,0x00,0x1E,0x00,0xC0,0x03,0x00,0x60,0x00,0x00,0xC0,0x03,0x00,0x00,0x3C,0x00,0x00,0x60,0x00,0x00,0x1E,0x00,0xE0,0x03,0x00,0x20, // 87
  0x00,0x40,0x00,0x60,0x60,0x00,0xC0,0x18,0x00,0x00,0x07,0x00,0x00,0x07,0x00,0x80,0x19,0x00,0x60,0x60,0x00,0x00,0x40, // 88
  0x60,0x00,0x00,0xC0,0x00,0x00,0x00,0x03,0x00,0x00,0x7C,0x00,0x00,0x03,0x00,0xC0,0x00,0x00,0x60, // 89
  0x00,0x00,0x00,0x20,0x60,0x00,0x20,0x70,0x00,0x20,0x5C,0x00,0x20,0x46,0x00,0xA0,0x43,0x00,0xE0,0x40,0x00,0x60,0x40, // 90
  0x00,0x00,0x00,0xE0,0xFF,0x03,0x20,0x00,0x02,0x20,0x00,0x02,  // 91
  0x20,0x00,0x00,0xC0,0x01,0x00,0x00,0x07,0x00,0x00,0x38,0x00,0x00,0x40,  // 92
  0x20,0x00,0x02,0x20,0x00,0x02,0xE0,0xFF,0x03, // 93
  0x00,0x08,0x00,0x00,0x06,0x00,0x80,0x01,0x00,0x60,0x00,0x00,0xC0,0x00,0x00,0x00,0x03,0x00,0x00,0x0C,  // 94
  0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x01,  // 95
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x20, // 96
  0x00,0x00,0x00,0x00,0x38,0x00,0x80,0x4C,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x24,0x00,0x00,0x7F,  // 97
  0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x21,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0x00,0x1E, // 98
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x21,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,  // 99
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x21,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0xF0,0x7F, // 100
  0x00,0x00,0x00,0x00,0x1E,0x00,0x80,0x25,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x45,0x00,0x00,0x47,  // 101
  0x00,0x00,0x00,0x80,0x00,0x00,0xE0,0x7F,0x00,0x90,0x00,0x00,0x90, // 102
  0x00,0x00,0x00,0x00,0x80,0x03,0x00,0xAF,0x04,0x80,0x50,0x04,0x80,0x50,0x04,0x80,0x50,0x04,0x80,0x4F,0x06,0x80,0x80,0x03,  // 103
  0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,  // 104
  0x00,0x00,0x00,0xA0,0x7F, // 105
  0x00,0x00,0x04,0xA0,0xFF,0x03,  // 106
  0x00,0x00,0x00,0xF0,0x7F,0x00,0x00,0x0C,0x00,0x00,0x0E,0x00,0x00,0x33,0x00,0x80,0x60,0x00,0x00,0x40,  // 107
  0x00,0x00,0x00,0xF0,0x7F, // 108
  0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F, // 109
  0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x80,0x00,0x00,0x00,0x7F,  // 110
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x21,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0x00,0x1E, // 111
  0x00,0x00,0x00,0x80,0xFF,0x07,0x00,0x21,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0x00,0x1E, // 112
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x21,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0x80,0xFF,0x07,  // 113
  0x00,0x00,0x00,0x80,0x7F,0x00,0x00,0x01,0x00,0x80,0x00,0x00,0x80, // 114
  0x00,0x00,0x00,0x00,0x43,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x48,0x00,0x80,0x38, // 115
  0x80,0x00,0x00,0xE0,0x3F,0x00,0x80,0x40,0x00,0x80,0x40, // 116
  0x00,0x00,0x00,0x80,0x3F,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0x80,0x7F,  // 117
  0x80,0x00,0x00,0x00,0x07,0x00,0x00,0x38,0x00,0x00,0x40,0x00,0x00,0x38,0x00,0x00,0x07,0x00,0x80,0x01,  // 118
  0x80,0x00,0x00,0x00,0x0F,0x00,0x00,0x70,0x00,0x00,0x70,0x00,0x00,0x0F,0x00,0x80,0x01,0x00,0x00,0x0E,0x00,0x00,0x70,0x00,0x00,0x78,0x00,0x80,0x0F,0x00,0x80, // 119
  0x00,0x00,0x00,0x80,0x61,0x00,0x00,0x33,0x00,0x00,0x0C,0x00,0x00,0x1E,0x00,0x80,0x61,0x00,0x80,0x40,  // 120
  0x80,0x01,0x04,0x00,0x07,0x04,0x00,0x38,0x02,0x00,0xC0,0x01,0x00,0x38,0x00,0x00,0x07,0x00,0x80, // 121
  0x00,0x00,0x00,0x80,0x60,0x00,0x80,0x70,0x00,0x80,0x4C,0x00,0x80,0x46,0x00,0x80,0x41,0x00,0x80,0x40,  // 122
  0x00,0x08,0x00,0x00,0x08,0x00,0xC0,0xF7,0x01,0x20,0x00,0x02,0x20,0x00,0x02, // 123
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x07,  // 124
  0x20,0x00,0x02,0x20,0x00,0x02,0xC0,0xF7,0x01,0x00,0x08,0x00,0x00,0x08,  // 125
  0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x06,0x00,0x00,0x04,0x00,0x00,0x04,0x00,0x00,0x06, // 126
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 127
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 128
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 129
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 130
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 131
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 132
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 133
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 134
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 135
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 136
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 137
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 138
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 139
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 140
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 141
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 142
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 143
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 144
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 145
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 146
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 147
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 148
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 149
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 150
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 151
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 152
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 153
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 154
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 155
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 156
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 157
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 158
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0x20,0x40,0x00,0xE0,0x7F,  // 159
  0x00,0x00,0x00,0x80,0xFD,0x01,  // 161
  0x00,0x00,0x00,0x80,0x0F,0x00,0x40,0x10,0x00,0x20,0x20,0x00,0x20,0x60,0x00,0x20,0x20,0x00,0x20,0x20,  // 162
  0x00,0x00,0x00,0x00,0x42,0x00,0xC0,0x7F,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x40,0x00,0x00,0x40, // 163
  0x00,0x00,0x00,0x80,0x1F,0x00,0x80,0x19,0x00,0x80,0x10,0x00,0x80,0x10,0x00,0x80,0x19,0x00,0x80,0x1F,  // 164
  0x20,0x00,0x00,0xC0,0x14,0x00,0x00,0x17,0x00,0x00,0x7C,0x00,0x00,0x17,0x00,0xC0,0x14,0x00,0x20, // 165
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xC1,0x07,  // 166
  0x00,0x00,0x00,0x60,0x47,0x00,0x90,0x44,0x00,0x90,0x48,0x00,0x10,0x49,0x00,0x10,0x37, // 167
  0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,  // 168
  0x00,0x00,0x00,0x00,0x0F,0x00,0xC0,0x30,0x00,0x40,0x20,0x00,0xA0,0x4F,0x00,0xE0,0x50,0x00,0x60,0x50,0x00,0x60,0x50,0x00,0x40,0x20,0x00,0xC0,0x30,0x00,0x00,0x0F,  // 169
  0x00,0x00,0x00,0xA0,0x03,0x00,0xA0,0x02,0x00,0xA0,0x02,0x00,0xE0,0x03,  // 170
  0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x16,0x00,0x00,0x21,0x00,0x00,0x0C,0x00,0x00,0x32,0x00,0x00,0x20,  // 171
  0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x1E,  // 172
  0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08, // 173
  0x00,0x00,0x00,0x00,0x0F,0x00,0xC0,0x30,0x00,0x40,0x20,0x00,0xE0,0x5F,0x00,0x60,0x42,0x00,0x60,0x46,0x00,0xA0,0x59,0x00,0x40,0x20,0x00,0xC0,0x30,0x00,0x00,0x0F,  // 174
  0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08,0x00,0x00,0x08, // 175
  0x00,0x00,0x00,0xC0,0x01,0x00,0x20,0x02,0x00,0x20,0x02,0x00,0xC0,0x01,  // 176
  0x00,0x00,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0xC0,0x5F,0x00,0x00,0x42,0x00,0x00,0x42,0x00,0x00,0x42, // 177
  0x00,0x00,0x00,0x40,0x08,0x00,0x20,0x0E,0x00,0x20,0x0B,0x00,0xC0,0x08,  // 178
  0x00,0x00,0x00,0x20,0x04,0x00,0xA0,0x04,0x00,0xA0,0x04,0x00,0x60,0x03,  // 179
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x10, // 180
  0x00,0x00,0x00,0x80,0xFF,0x07,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0x80,0x7F,  // 181
  0x00,0x00,0x00,0xE0,0x03,0x00,0xF0,0x07,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0xFF,0x03,0x10,0x00,0x00,0xF0,0xFF,0x03,  // 182
  0x00,0x00,0x00,0x00,0x06, // 183
  0x00,0x00,0x04,0x00,0x80,0x05,0x00,0x00,0x06, // 184
  0x40,0x00,0x00,0x20,0x00,0x00,0xE0,0x07,  // 185
  0x00,0x00,0x00,0xC0,0x01,0x00,0x20,0x02,0x00,0x20,0x02,0x00,0xC0,0x01,  // 186
  0x00,0x00,0x00,0x00,0x21,0x00,0x00,0x16,0x00,0x00,0x0C,0x00,0x00,0x33,0x00,0x00,0x1C, // 187
  0x40,0x00,0x00,0x20,0x00,0x00,0xE0,0x67,0x00,0x00,0x18,0x00,0x00,0x04,0x00,0x00,0x23,0x00,0x80,0x38,0x00,0x60,0x24,0x00,0x00,0x7E,0x00,0x00,0x20, // 188
  0x00,0x00,0x00,0x20,0x40,0x00,0xE0,0x27,0x00,0x00,0x18,0x00,0x00,0x06,0x00,0x00,0x01,0x00,0xC0,0x42,0x00,0x20,0x71,0x00,0x00,0x59,0x00,0x00,0x46, // 189
  0x20,0x04,0x00,0xA0,0x04,0x00,0xA0,0x44,0x00,0x60,0x33,0x00,0x00,0x0C,0x00,0x00,0x02,0x00,0x80,0x39,0x00,0x60,0x24,0x00,0x00,0x7E,0x00,0x00,0x20, // 190
  0x00,0x00,0x00,0x00,0xC0,0x01,0x00,0x20,0x02,0x00,0x10,0x02,0x80,0x0D,0x02,0x00,0x00,0x02,  // 191
  0x00,0x40,0x00,0x00,0x38,0x00,0x02,0x0E,0x00,0xC6,0x09,0x00,0x68,0x08,0x00,0x80,0x09,0x00,0x00,0x0E,0x00,0x00,0x70,0x00,0x00,0x40,  // 192
  0x00,0x40,0x00,0x00,0x38,0x00,0x00,0x0E,0x00,0xC0,0x09,0x00,0x64,0x08,0x00,0x86,0x09,0x00,0x00,0x0E,0x00,0x00,0x70,0x00,0x00,0x40,  // 193
  0x00,0x40,0x00,0x00,0x38,0x00,0x08,0x0E,0x00,0xC4,0x09,0x00,0x62,0x08,0x00,0x84,0x09,0x00,0x08,0x0E,0x00,0x00,0x70,0x00,0x00,0x40,  // 194
  0x00,0x40,0x00,0x00,0x38,0x00,0x0C,0x0E,0x00,0xC4,0x09,0x00,0x6C,0x08,0x00,0x88,0x09,0x00,0x04,0x0E,0x00,0x00,0x70,0x00,0x00,0x40,  // 195
  0x00,0x70,0x00,0x00,0x1C,0x00,0x84,0x0B,0x00,0xE0,0x08,0x00,0xE0,0x08,0x00,0x84,0x0B,0x00,0x00,0x1C,0x00,0x00,0x70, // 196
  0x00,0x40,0x00,0x00,0x30,0x00,0x00,0x0E,0x00,0xBC,0x0B,0x00,0x64,0x08,0x00,0xBC,0x09,0x00,0x00,0x0E,0x00,0x00,0x70,0x00,0x00,0x40,  // 197
  0x00,0x60,0x00,0x00,0x38,0x00,0x00,0x0E,0x00,0x80,0x0B,0x00,0xE0,0x08,0x00,0x20,0x08,0x00,0xE0,0x7F,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,  // 198
  0x00,0x00,0x00,0x80,0x1F,0x00,0x40,0x30,0x00,0x60,0x60,0x00,0x20,0x60,0x04,0x20,0xE0,0x05,0x20,0x60,0x03,0x20,0x20, // 199
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x26,0x42,0x00,0x24,0x42,0x00,0x20,0x42,0x00,0x20,0x42, // 200
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x20,0x42,0x00,0x24,0x42,0x00,0x22,0x42,0x00,0x20,0x42, // 201
  0x00,0x00,0x00,0xE8,0x7F,0x00,0x24,0x42,0x00,0x22,0x42,0x00,0x24,0x42,0x00,0x28,0x42, // 202
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x24,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x24,0x42,0x00,0x20,0x42,  // 203
  0x06,0x00,0x00,0xE4,0x7F, // 204
  0x00,0x00,0x00,0xEC,0x7F,0x00,0x06, // 205
  0x04,0x00,0x00,0xE2,0x7F,0x00,0x04, // 206
  0x00,0x00,0x00,0x04,0x00,0x00,0xE0,0x7F,0x00,0x04,  // 207
  0x00,0x00,0x00,0x00,0x02,0x00,0xE0,0x7F,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x42,0x00,0x20,0x40,0x00,0x40,0x20,0x00,0xC0,0x30,0x00,0x00,0x0F, // 208
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x68,0x00,0x00,0x84,0x01,0x00,0x04,0x02,0x00,0x08,0x0C,0x00,0x08,0x10,0x00,0x04,0x60,0x00,0xE0,0x7F,  // 209
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x60,0x60,0x00,0x26,0x40,0x00,0x2C,0x40,0x00,0x20,0x40,0x00,0x60,0x60,0x00,0xC0,0x30,0x00,0x80,0x1F, // 210
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x60,0x60,0x00,0x20,0x40,0x00,0x24,0x40,0x00,0x22,0x40,0x00,0x60,0x60,0x00,0xC0,0x30,0x00,0x80,0x1F, // 211
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x68,0x60,0x00,0x26,0x40,0x00,0x22,0x40,0x00,0x24,0x40,0x00,0x68,0x60,0x00,0xC0,0x30,0x00,0x80,0x1F, // 212
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x6C,0x60,0x00,0x24,0x40,0x00,0x2C,0x40,0x00,0x28,0x40,0x00,0x6C,0x60,0x00,0xC0,0x30,0x00,0x80,0x1F, // 213
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x30,0x00,0x60,0x60,0x00,0x24,0x40,0x00,0x20,0x40,0x00,0x24,0x40,0x00,0x60,0x60,0x00,0xC0,0x30,0x00,0x80,0x1F, // 214
  0x00,0x00,0x00,0x80,0x10,0x00,0x00,0x09,0x00,0x00,0x06,0x00,0x00,0x06,0x00,0x00,0x09,0x00,0x80,0x10,  // 215
  0x00,0x00,0x00,0x80,0x1F,0x00,0xC0,0x70,0x00,0x60,0x70,0x00,0x20,0x4C,0x00,0x20,0x46,0x00,0x20,0x41,0x00,0xE0,0x60,0x00,0xE0,0x30,0x00,0x80,0x1F, // 216
  0x00,0x00,0x00,0xE0,0x1F,0x00,0x00,0x20,0x00,0x02,0x40,0x00,0x06,0x40,0x00,0x08,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0xE0,0x1F,  // 217
  0x00,0x00,0x00,0xE0,0x1F,0x00,0x00,0x20,0x00,0x00,0x40,0x00,0x0C,0x40,0x00,0x06,0x40,0x00,0x02,0x40,0x00,0x00,0x20,0x00,0xE0,0x1F,  // 218
  0x00,0x00,0x00,0xE0,0x1F,0x00,0x08,0x20,0x00,0x04,0x40,0x00,0x02,0x40,0x00,0x06,0x40,0x00,0x04,0x40,0x00,0x00,0x20,0x00,0xE0,0x1F,  // 219
  0x00,0x00,0x00,0xE0,0x1F,0x00,0x00,0x20,0x00,0x04,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x04,0x40,0x00,0x00,0x20,0x00,0xE0,0x1F,  // 220
  0x60,0x00,0x00,0xC0,0x00,0x00,0x00,0x03,0x00,0x08,0x7C,0x00,0x04,0x03,0x00,0xC0,0x00,0x00,0x60, // 221
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0x40,0x10,0x00,0xC0,0x08,0x00,0x80,0x07,  // 222
  0x00,0x00,0x00,0xE0,0x7F,0x00,0x10,0x00,0x00,0x10,0x40,0x00,0x10,0x43,0x00,0x90,0x44,0x00,0x60,0x4C,0x00,0x00,0x38, // 223
  0x00,0x00,0x00,0x00,0x38,0x00,0x90,0x4C,0x00,0xB0,0x44,0x00,0xA0,0x44,0x00,0x80,0x24,0x00,0x00,0x7F,  // 224
  0x00,0x00,0x00,0x00,0x38,0x00,0x80,0x4C,0x00,0x80,0x44,0x00,0xB0,0x44,0x00,0x90,0x24,0x00,0x00,0x7F,  // 225
  0x00,0x00,0x00,0x00,0x38,0x00,0xA0,0x4C,0x00,0x90,0x44,0x00,0x90,0x44,0x00,0xA0,0x24,0x00,0x00,0x7F,  // 226
  0x00,0x00,0x00,0x00,0x38,0x00,0xA0,0x4C,0x00,0xA0,0x44,0x00,0xA0,0x44,0x00,0xA0,0x24,0x00,0x20,0x7F,  // 227
  0x00,0x00,0x00,0x00,0x38,0x00,0xA0,0x4C,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0xA0,0x24,0x00,0x00,0x7F,  // 228
  0x00,0x00,0x00,0x00,0x38,0x00,0x80,0x4C,0x00,0xB8,0x44,0x00,0xA8,0x44,0x00,0xB8,0x24,0x00,0x00,0x7F,  // 229
  0x00,0x00,0x00,0x00,0x38,0x00,0x80,0x4C,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x24,0x00,0x00,0x1F,0x00,0x80,0x65,0x00,0x80,0x44,0x00,0x80,0x44,0x00,0x80,0x45,0x00,0x00,0x47, // 230
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x31,0x04,0x80,0xE0,0x05,0x80,0x60,0x07,0x80,0x60,0x00,0x80,0x20,  // 231
  0x00,0x00,0x00,0x00,0x1E,0x00,0x90,0x25,0x00,0xB0,0x44,0x00,0xA0,0x44,0x00,0x80,0x45,0x00,0x00,0x47,  // 232
  0x00,0x00,0x00,0x00,0x1E,0x00,0x80,0x25,0x00,0x80,0x44,0x00,0xB0,0x44,0x00,0x90,0x45,0x00,0x00,0x47,  // 233
  0x00,0x00,0x00,0x00,0x1E,0x00,0xA0,0x25,0x00,0x90,0x44,0x00,0x90,0x44,0x00,0xA0,0x45,0x00,0x00,0x47,  // 234
  0x00,0x00,0x00,0x00,0x1E,0x00,0x80,0x25,0x00,0xA0,0x44,0x00,0x80,0x44,0x00,0xA0,0x45,0x00,0x00,0x47,  // 235
  0x10,0x00,0x00,0xA0,0x7F, // 236
  0x00,0x00,0x00,0xA0,0x7F,0x00,0x10, // 237
  0x20,0x00,0x00,0x90,0x7F,0x00,0x20, // 238
  0x20,0x00,0x00,0x80,0x7F,0x00,0x20, // 239
  0x00,0x00,0x00,0x00,0x1E,0x00,0x40,0x23,0x00,0x50,0x41,0x00,0x30,0x41,0x00,0x60,0x41,0x00,0xD0,0x22,0x00,0x00,0x1F, // 240
  0x00,0x00,0x00,0x80,0x7F,0x00,0x20,0x01,0x00,0xA0,0x00,0x00,0xA0,0x00,0x00,0xA0,0x00,0x00,0x00,0x7F,  // 241
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x21,0x00,0x90,0x40,0x00,0xA0,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0x00,0x1E, // 242
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x21,0x00,0x80,0x40,0x00,0xA0,0x40,0x00,0x90,0x40,0x00,0x00,0x21,0x00,0x00,0x1E, // 243
  0x00,0x00,0x00,0x00,0x1E,0x00,0x20,0x21,0x00,0xB0,0x40,0x00,0x90,0x40,0x00,0xB0,0x40,0x00,0x40,0x21,0x00,0x00,0x1E, // 244
  0x00,0x00,0x00,0x00,0x1E,0x00,0x20,0x21,0x00,0xA0,0x40,0x00,0xA0,0x40,0x00,0xA0,0x40,0x00,0x20,0x21,0x00,0x00,0x1E, // 245
  0x00,0x00,0x00,0x00,0x1E,0x00,0x00,0x21,0x00,0xA0,0x40,0x00,0x80,0x40,0x00,0xA0,0x40,0x00,0x00,0x21,0x00,0x00,0x1E, // 246
  0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x80,0x12,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x00,0x02,  // 247
  0x00,0x00,0x00,0x00,0x5E,0x00,0x00,0x61,0x00,0x80,0x58,0x00,0x80,0x4C,0x00,0x80,0x46,0x00,0x00,0x21,0x00,0x80,0x1E, // 248
  0x00,0x00,0x00,0x80,0x3F,0x00,0x10,0x40,0x00,0x30,0x40,0x00,0x00,0x40,0x00,0x00,0x20,0x00,0x80,0x7F,  // 249
  0x00,0x00,0x00,0x80,0x3F,0x00,0x00,0x40,0x00,0x20,0x40,0x00,0x30,0x40,0x00,0x10,0x20,0x00,0x80,0x7F,  // 250
  0x00,0x00,0x00,0x80,0x3F,0x00,0x20,0x40,0x00,0x10,0x40,0x00,0x10,0x40,0x00,0x20,0x20,0x00,0x80,0x7F,  // 251
  0x00,0x00,0x00,0x80,0x3F,0x00,0x20,0x40,0x00,0x00,0x40,0x00,0x00,0x40,0x00,0x20,0x20,0x00,0x80,0x7F,  // 252
  0x80,0x01,0x04,0x00,0x07,0x04,0x00,0x38,0x02,0x20,0xC0,0x01,0x10,0x38,0x00,0x00,0x07,0x00,0x80, // 253
  0x00,0x00,0x00,0xF0,0xFF,0x07,0x00,0x21,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x80,0x40,0x00,0x00,0x21,0x00,0x00,0x1E, // 254
  0x00,0x00,0x04,0x80,0x03,0x04,0x20,0x1E,0x06,0x00,0xF0,0x03,0x00,0xE0,0x00,0x20,0x1C,0x00,0x80,0x03 // 255
};
