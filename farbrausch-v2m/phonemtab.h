// file automatically generated by kram.exe - do not ask

#pragma pack (push, 1)

struct Phoneme
{
  float f1f, f1b;
  float f2f, f2b;
  float f3f, f3b;
  float fnf;
  float a_voicing, a_aspiration, a_frication, a_bypass;
  float a_1, a_2, a_3, a_4, a_n, a_56;
  float duration, rank;
};

#pragma pack (pop)

//  {  490,   60, 1480,   90, 2500,  150,  270,  0,  0,  0,-16,-16,-16,-16,-16,-16,-16,  0,  5, 31}, //  18: end
//  {  280,   60, 1720,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 38, 38, 50,-16,-16,  0,  4, 20}, //  68: zz

// f1f: /10
// f1b: /10
// f2f: /20
// f2b: /10
// f3f: /20
// f3b: /10
// fnf: /10

#define NPHONEMES 69
#define PTABSIZE  1311

static const uint8_t multipliers[PTABSIZE/NPHONEMES] = { 10,10,20,10,20,10,10,1,1,1,1,1,1,1,1,1,1,1,1 };


// CHANGES:  a_f56 + 15 (-> duration -15)
//           a_bypass -3 (-> a_f1 +3)

static const uint8_t rawphonemes[PTABSIZE] =
{
//   0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68
// f1f (Hz*1/10)
    49, 30,241,  0, 15,226,226,  0,  0,  0, 21,235,  9,  0,247,  0, 45,217, 24,  9,238,235,  0,  0, 30,247,247, 18, 30,196,  9,247,  0,  0, 27,  0,  2,  0,  0, 13,244,  0,244,  0, 12, 30,214,238,  0,  0, 30,235, 21,  0,247,  0,235, 21,235,  0, 51,211,  3,247,  0,  6,  3,  0,  0,
// f1b (Hz*1/10)
   234,  7,249,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,  0, 12,246,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 14,242,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// f2f (Hz*1/20)
    68, 15,247, 21,199,253,253,  0,  0, 51, 12,244,247,  0,  9,  0, 12, 15,214,253,  0,  3,  0,  0,  0, 30,  6,220,226, 45, 12,229,  0,  0,  0,229,  3, 39,208,  3, 30,223,  9,  0,247, 24,241,244,  0,  0, 36,253,244,  0, 27, 24,235,  0,  0,  0,235,232, 27,223, 36, 51,217, 15,241,
// f2b (Hz*1/10)
   179,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8, 13,241,250,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// f3f (Hz*1/20)
   116,  0,  0,  0,  0,  0,  0,  0,  0,  9,250,  6,250,  0,  6,  0,247, 35,221,  0,  3,  3,  0,  0,250,  3, 18,235,  0,  9,250,  3,  0,  0,250,  0,241, 21,  9,241,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  3,208,  0, 51,253,  6,  0,  0,  0,247,241, 18,229, 30, 18,235,  0,  0,
// f3b (Hz*1/10)
   143,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,253, 14,240,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,248, 15,249,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// fnf (Hz*1/10)
    12,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  9,  9,247,247,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// a_voicing (dB)
    35,  0,  0,  0,  0,  0,  0,  0,  0,194,  0, 62,230, 26,  0,  0,  0,  0,194, 62,194, 62,  0,  0,194, 62,  0,  0,  0,  0,  0,194,  0,  0, 62,  0,  0,  0,246, 10,  0,  0,  0,  0,  0,  0,  0,194,  0,  0,  0, 62,  0,244,206,  0,  0,  0,  0,  0, 62,  0,  0,  0,194, 62,234, 22,  0,
// a_aspiration (dB)
   194,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,196,  0,  0,  0,  0,  0,  0,  0,  0, 32,224,  0,  0, 60,196,  0,  0,  0,  0,  0, 60,  0,  0,196,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,  0,196,  0,  0,  0, 32, 28,  0,  0,  0,  0,196,  0,  0,  0, 60,196, 20,236,  0,
// a_frication (dB)
     0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,196, 60,196,  0,  0,  0,  0,  0,  0, 54,202,  0,  0, 60,196,  0,  0,  0,  0,  0, 60,  0,  0,196,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 60,  0,  0,196,  0,  0,  0, 60,  0,  0,  0,  0,  0,196,  0,  0,  0, 60,196, 60,196,  0,
// a_bypass (dB)
   237,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 70,186,  0,  0,  0,  0,  0,  0, 70,186,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
// a_f1 (dB)
    83,  0,  0,  0,  0,  0,230,  0,202,  0,  0, 61,254,  0,  9,  0, 12,  0,176, 80,176, 65,  0,  0,  0, 15,  0,  0,  0,237,254,197,  0,  0, 66,  0,246,  9,241, 30,  0,  0,  0,  0,  0,  0,  0,176, 54,  0,202, 59, 13,  0,184,  0,  0,  0,  0,  0, 80,  0,235, 14,183, 80,235,  0,  0,
// a_f2 (dB)
    21,253,254,253,  7,252,181, 79,177,  0, 61,195, 61,  0,  7,246, 14,247,193, 75,211,226, 75,246,  1,  0,255, 15,255,177, 56,200, 80,246,242,  0,  4,  5,251, 17,  3,251,253,  0,  3,  2,251,184, 79,245,188, 70,251,  0,249,  3,195, 56,200,  0, 73,251,  2,244, 12,249,247,  2,254,
// a_f3 (dB)
     9,  5,253,  3,247,249,204, 73,183,  0, 72,184, 56,  0,  9,245, 14,254,190, 63,223,226, 70,245,253,  9,  1,253,252,197, 66,190, 80,246,242,  0,  7,  2,  0,243, 11,245,  6,  0,250, 13,249,198, 73,246,193, 66,255,  0,249, 14,184, 58, 10,246,  3,242, 19,241, 19,254,242, 12,244,
// a_f4 (dB)
     2,  5,254,  2,247,251,209, 68,188,  0, 61,195, 58,  0, 17,246,252,  0,195, 56,200,  0, 54,246,  8,  7,  2,251,252,204, 56,200, 59,246,  2,  0,205, 50,236, 15, 11,247,  5,  0,251, 11,250,204, 68,246,198, 63,193,  0, 70,247,195, 52, 28,246,240,242, 23,193, 49, 12,  5,246, 10,
// a_fn (dB)
   190,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 72,  0,  0,184,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,200,  0, 66,246, 10,246,  0,246,210,  0, 56,200, 46,210, 66,236,  0,
// a_f56 (dB)
   225,  0,  0,  0,  0,  0,  0,  0,  0, 46,246,  0, 10,236,246,240,  0,  0,  0,  0, 46,210,  0,  0, 26,230,  0,  0,  0, 26,246, 10,  0,246,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 46,236, 10,246,230,  0,  0,  0,  0,  0,  0,  0,  0, 26,  0,
// duration (frames)
   235,  1,  1,  0,  9,251,  2,245,255,  4,  4,  0,252,  0,253,  0,  3,  3,254, 11,252,  0,245,  1,  3,  1,  0,  0,  0,254,255,  5,249,  3,  4,  0,  0,  0,  0,254,  0,  0,254,  2,  0,  0,  0,  2,249,  1,  4,250, 11,255,  2,  0,250,  9,242,  1,  4,  3,251,  4,  4,251,253,  0,  0,
// rank
   254,  0,  0,  0,  0,  0, 24,  3,253,253,251,  8,250,  0,  9,253,232,  0, 29,227, 16,  8,  3,253,239,249,  0,  0,  0, 24,250,  3,  6,250,244,  0,  0,  0,  0,247,  0,  0,  0,  0,  0,  0,  0, 21,  6,250,  6,  1,236,  0,  8,  0,  5,251, 11,250,235,  0, 18,246,  8,248, 10,  0,  0,
};

/*
static Phoneme orgphonemes[] =
{
  {  490,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 64, 47, 40,-16,-16,  4,  2}, //   0: a
  {  790,  130, 1780,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 61, 52, 45,-16,-16,  5,  2}, //   1: aa
  {  640,   60, 1600,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 49, 43,-16,-16,  6,  2}, //   2: ai
  {  640,   60, 2020,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 52, 45,-16,-16,  6,  2}, //   3: air
  {  790,   60,  880,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 63, 43, 36,-16,-16, 15,  2}, //   4: ar
  {  490,   60,  820,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 36, 31,-16,-16, 10,  2}, //   5: aw
  {  190,   60,  760,   90, 2500,  150,  270, 62,  0,  0,-16, 38,-16,-16,-16,-16,-16, 12, 26}, //   6: b
  {  190,   60,  760,   90, 2500,  150,  270, 62,  0,  0,-16, 38, 63, 57, 52,-16,-16,  1, 29}, //   7: by
  {  190,   60,  760,   90, 2500,  150,  270, 62,  0,  0,-16,-16,-16,-16,-16,-16,-16,  0, 26}, //   8: bz
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16,-16, 30,  4, 23}, //   9: ch
  {  400,   60, 2020,   90, 2560,  150,  270,  0, 60, 60,-16,-16, 45, 56, 45,-16, 20,  8, 18}, //  10: ci
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 45,-16,-16,-16,-16, 20,  8, 26}, //  11: d
  {  280,   60, 1600,   90, 2560,  150,  270, 36,  0, 60, 54, 43, 45, 40, 42,-16, 30,  4, 20}, //  12: dh
  {  280,   60, 1600,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 45, 40, 42,-16, 10,  4, 20}, //  13: di
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 52, 52, 49, 59,-16,  0,  1, 29}, //  14: dy
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 52, 42, 38, 49,-16,-16,  1, 26}, //  15: dz
  {  640,   60, 2020,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 52, 45,-16,-16,  4,  2}, //  16: e
  {  250,   60, 2320,   90, 3200,  150,  270, 62,  0,  0,-16, 64, 47, 50, 45,-16,-16,  7,  2}, //  17: ee
  {  490,   60, 1480,   90, 2500,  150,  270,  0,  0,  0,-16,-16,-16,-16,-16,-16,-16,  5, 31}, //  18: end
  {  580,   60, 1420,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 47, 40,-16,-16, 16,  2}, //  19: er
  {  400,   60, 1420,   90, 2560,  150,  270,  0, 32, 54, 54,-16, 14, 14,-16,-16, 30, 12, 18}, //  20: f
  {  190,   60, 1480,   90, 2620,  150,  270, 62,  0,  0,-16, 49,-16,-16,-16,-16,-16, 12, 26}, //  21: g
  {  190,   60, 1480,   90, 2620,  150,  270, 62,  0,  0,-16, 49, 59, 54, 38,-16,-16,  1, 29}, //  22: gy
  {  190,   60, 1480,   90, 2620,  150,  270, 62,  0,  0,-16, 49, 49, 43, 28,-16,-16,  2, 26}, //  23: gz
  {  490,   60, 1480,   90, 2500,  150,  270,  0, 60, 60,-16, 49, 50, 40, 36,-16, 10,  5,  9}, //  24: h
  {  400,   60, 2080,   90, 2560,  150,  270, 62,  0,  0,-16, 64, 50, 49, 43,-16,-16,  6,  2}, //  25: i
  {  310,   60, 2200,   90, 2920,  150,  270, 62,  0,  0,-16, 64, 49, 50, 45,-16,-16,  6,  2}, //  26: ia
  {  490,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 64, 47, 40,-16,-16,  6,  2}, //  27: ib
  {  790,   60,  880,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 63, 43, 36,-16,-16,  6,  2}, //  28: ie
  {  190,   60, 1780,   90, 2680,  150,  270, 62,  0,  0,-16, 45,-16,-16,-16,-16, 10,  4, 26}, //  29: j
  {  280,   60, 2020,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 40, 50, 40,-16,  0,  3, 20}, //  30: jy
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16,-16, 10,  8, 23}, //  31: k
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16, 64, 64, 43,-16, 10,  1, 29}, //  32: ky
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16, 54, 54, 33,-16,  0,  4, 23}, //  33: kz
  {  460,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 50, 40, 40, 35,-16,-16,  8, 11}, //  34: l
  {  460,   60,  940,   90, 2500,  150,  270, 62,  0,  0,-16, 50, 40, 40, 35,-16,-16,  8, 11}, //  35: ll
  {  480,   40, 1000,  170, 2200,  120,  360, 62,  0,  0,-16, 40, 44, 47,-16, 56,-16,  8, 11}, //  36: m
  {  480,   40, 1780,  300, 2620,  260,  450, 62,  0,  0,-16, 49, 49, 49, 34, 56,-16,  8, 11}, //  37: n
  {  480,  160,  820,  150, 2800,  100,  360, 52,  0,  0,-16, 34, 44, 49, 14, 56,-16,  8, 11}, //  38: ng
  {  610,   60,  880,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 61, 36, 29,-16,-16,  6,  2}, //  39: o
  {  490,   60, 1480,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 64, 47, 40,-16,-16,  6,  2}, //  40: oa
  {  490,   60,  820,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 36, 31,-16,-16,  6,  2}, //  41: oi
  {  370,   60, 1000,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 42, 36,-16,-16,  4,  2}, //  42: oo
  {  370,   60, 1000,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 42, 36,-16,-16,  6,  2}, //  43: oor
  {  490,   60,  820,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 59, 36, 31,-16,-16,  6,  2}, //  44: or
  {  790,   60, 1300,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 61, 49, 42,-16,-16,  6,  2}, //  45: ou
  {  370,   60, 1000,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 56, 42, 36,-16,-16,  6,  2}, //  46: ov
  {  190,   60,  760,   90, 2500,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16,-16,-16,  8, 23}, //  47: p
  {  190,   60,  760,   90, 2500,  150,  270,  0, 60, 60,-16, 38, 63, 57, 52,-16,-16,  1, 29}, //  48: py
  {  190,   60,  760,   90, 2500,  150,  270,  0, 60, 60,-16, 38, 52, 47, 42,-16,-16,  2, 23}, //  49: pz
  {  490,   60, 1480,   90, 2500,  150,  270,  0,  0,  0,-16,-16,-16,-16,-16,-16,-16,  6, 29}, //  50: q
  {  280,   60, 1420,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 54, 50, 47, 40,-16,  0, 30}, //  51: qq
  {  490,   60, 1180,   90, 1600,  150,  270, 62,  0,  0,-16, 56, 49, 49,-16,-16,-16, 11, 10}, //  52: r
  {  490,   60, 1180,   90, 1600,   70,  270, 50,  0,  0,-16, 56, 49, 49,-16,-16,-16, 10, 10}, //  53: rx
  {  400,  200, 1720,   90, 2620,  220,  270,  0, 32, 60,-16,-16, 42, 42, 54, 50, 30, 12, 18}, //  54: s
  {  400,   60, 2200,   90, 2560,  150,  270,  0, 60, 60,-16,-16, 45, 56, 45, 40, 10, 12, 18}, //  55: sh
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16,-16,-16, 50, 20,  6, 23}, //  56: t
  {  400,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16, 40, 42, 36, 40, 10, 15, 18}, //  57: th
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16, 52, 64, 40,-16,  1, 29}, //  58: ty
  {  190,   60, 1780,   90, 2680,  150,  270,  0, 60, 60,-16,-16,-16, 42, 54, 30,-16,  2, 23}, //  59: tz
  {  700,   60, 1360,   90, 2500,  150,  270, 62,  0,  0,-16, 64, 57, 45, 38,-16,-16,  6,  2}, //  60: u
  {  250,   60,  880,   90, 2200,  150,  270, 62,  0,  0,-16, 64, 52, 31, 24,-16,-16,  9,  2}, //  61: uu
  {  280,   60, 1420,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 54, 50, 47, 40,-16,  4, 20}, //  62: v
  {  190,   60,  760,   90, 2020,  150,  270, 62,  0,  0,-16, 57, 42, 35,-16,-16,-16,  8, 10}, //  63: w
  {  190,   60, 1480,   90, 2620,  150,  270,  0, 60, 60,-16,-16, 54, 54, 33, 30,-16, 12, 18}, //  64: x
  {  250,   60, 2500,   90, 2980,  150,  270, 62,  0,  0,-16, 64, 47, 52, 45,-16,-16,  7, 10}, //  65: y
  {  280,   60, 1720,   90, 2560,  150,  270, 40, 20, 60,-16, 43, 38, 38, 50, 50,-16,  4, 20}, //  66: z
  {  280,   60, 2020,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 40, 50, 40, 30, 10,  4, 20}, //  67: zh
  {  280,   60, 1720,   90, 2560,  150,  270, 62,  0,  0,-16, 43, 38, 38, 50, 30, 10,  4, 20}, //  68: zz
};
*/