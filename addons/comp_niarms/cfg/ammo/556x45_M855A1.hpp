//5,56x45 M855A1
class GEGVAR(ammo,TRIPLES(556x45,M855A1,1Rnd)): GEGVAR(core,1Rnd) {
				displayName = CSTRING(556x45_M855A1_1Rnd);
				scope = 2;
				picture = QGPATH(main,data\556mm.paa);
};
class GEGVAR(ammo,TRIPLES(556x45,M855A1,10Rnd)): GEGVAR(core,10Rnd) {
				displayName = CSTRING(556x45_M855A1_10Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M855A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M855A1,20Rnd)): GEGVAR(core,20Rnd) {
				displayName = CSTRING(556x45_M855A1_20Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M855A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M855A1,30Rnd)): GEGVAR(core,30Rnd) {
				displayName = CSTRING(556x45_M855A1_30Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M855A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M855A1,40Rnd)): GEGVAR(core,40Rnd) {
				displayName = CSTRING(556x45_M855A1_40Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M855A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M855A1,50Rnd)): GEGVAR(core,50Rnd) {
				displayName = CSTRING(556x45_M855A1_50Rnd);
				scope = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M855A1,1Rnd));
};
class GEGVAR(ammo,TRIPLES(556x45,M855A1,60Rnd)): GEGVAR(core,60Rnd) {
				displayName = CSTRING(556x45_M855A1_60Rnd);
				scope = 2;
				scopeArsenal = 2;
				scopeCurator = 2;
				GGVAR(ammotype) = QGEGVAR(ammo,TRIPLES(556x45,M855A1,1Rnd));
};
