//7,62x54 7N13 AP
class GEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x54_7N13_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(762x54,7N13,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x54_7N13_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7N13,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x54_7N13_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7N13,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x54_7N13_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7N13,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x54_7N13_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7N13,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x54_7N13_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x54,7N13,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x54_7N13_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x54,7N13,1Rnd));
};
