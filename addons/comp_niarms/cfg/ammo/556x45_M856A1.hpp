//5,56x45 M856A1 (Tracer)
class GEGVAR(ammo,TRIPLES(556x45,M856A1,1Rnd)): GEGVAR(core,1Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(556x45_M856A1_1Rnd);
    scope = 2;
    picture = QGPATH(main,data\556mm.paa);
};
class GEGVAR(ammo,TRIPLES(556x45,M856A1,10Rnd)): GEGVAR(core,10Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(556x45_M856A1_10Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M856A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M856A1,20Rnd)): GEGVAR(core,20Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(556x45_M856A1_20Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M856A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M856A1,30Rnd)): GEGVAR(core,30Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(556x45_M856A1_30Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M856A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M856A1,40Rnd)): GEGVAR(core,40Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(556x45_M856A1_40Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M856A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M856A1,50Rnd)): GEGVAR(core,50Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(556x45_M856A1_50Rnd);
    scope = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M856A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M856A1,60Rnd)): GEGVAR(core,60Rnd) {
    author = CSTRING(Author);
    displayName = CSTRING(556x45_M856A1_60Rnd);
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M856A1,1Rnd));
};
