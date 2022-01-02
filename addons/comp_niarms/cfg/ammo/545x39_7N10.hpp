//5,45x39 7N10 FMJ
class GEGVAR(ammo,TRIPLES(545x39,7N10,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(545x39_7N10_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\556mm.paa);
};
class GEGVAR(ammo,TRIPLES(545x39,7N10,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(545x39_7N10_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N10,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N10,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(545x39_7N10_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N10,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N10,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(545x39_7N10_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N10,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N10,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(545x39_7N10_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N10,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N10,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(545x39_7N10_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N10,1Rnd));
};
class GEGVAR(ammo,TRIPLES(545x39,7N10,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(545x39_7N10_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(545x39,7N10,1Rnd));
};
