//7,5x55 APBT
class GEGVAR(ammo,TRIPLES(750x55,AP,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(750x55_AP_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(750x55,AP,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(750x55_AP_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(750x55,AP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(750x55,AP,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(750x55_AP_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(750x55,AP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(750x55,AP,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(750x55_AP_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(750x55,AP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(750x55,AP,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(750x55_AP_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(750x55,AP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(750x55,AP,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(750x55_AP_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(750x55,AP,1Rnd));
};
class GEGVAR(ammo,TRIPLES(750x55,AP,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(750x55_AP_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(750x55,AP,1Rnd));
};
