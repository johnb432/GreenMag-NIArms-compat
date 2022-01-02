//7,62x39 7N23 AP
class GEGVAR(ammo,TRIPLES(762x39,7N23,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x39_7N23_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(762x39,7N23,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x39_7N23_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,7N23,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,7N23,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x39_7N23_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,7N23,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,7N23,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x39_7N23_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,7N23,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,7N23,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x39_7N23_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,7N23,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,7N23,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x39_7N23_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,7N23,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x39,7N23,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x39_7N23_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x39,7N23,1Rnd));
};
