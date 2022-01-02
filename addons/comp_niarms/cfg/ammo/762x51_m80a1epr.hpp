//7,62x51 M80A1 EPR
class GEGVAR(ammo,TRIPLES(762x51,m80a1epr,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x51_m80a1epr_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\762mm.paa);
};
class GEGVAR(ammo,TRIPLES(762x51,m80a1epr,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x51_m80a1epr_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m80a1epr,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m80a1epr,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x51_m80a1epr_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m80a1epr,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m80a1epr,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x51_m80a1epr_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m80a1epr,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m80a1epr,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x51_m80a1epr_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m80a1epr,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m80a1epr,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x51_m80a1epr_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m80a1epr,1Rnd));
};
class GEGVAR(ammo,TRIPLES(762x51,m80a1epr,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(762x51_m80a1epr_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(762x51,m80a1epr,1Rnd));
};
