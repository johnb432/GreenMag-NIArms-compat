//7,92x57 s.S. (Ball/FMJ)
class GEGVAR(ammo,TRIPLES(792x57,sS,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(792x57_sS_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(792x57,sS,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(792x57_sS_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,sS,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,sS,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(792x57_sS_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,sS,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,sS,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(792x57_sS_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,sS,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,sS,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(792x57_sS_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,sS,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,sS,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(792x57_sS_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,sS,1Rnd));
};
class GEGVAR(ammo,TRIPLES(792x57,sS,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(792x57_sS_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(792x57,sS,1Rnd));
};
