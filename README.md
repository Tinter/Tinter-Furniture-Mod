# Tinter-Furniture-Mod
This is the mod version of Tinter-Furniture, please see https://github.com/Tinter/Tinter-Furniture.
While I think Tinter-Furniture works best as a script in a mission, this mod is provided for people who are not mission makers but still want furniture.
Note that the mod will spawn furniture in every building and there's no way to avoid this in an automatic way, which is why it should be handled as the mission maker.
Furthermore, this only uses the default furniture compositions, so you miss out on the differently themed compositions.

### To install:
Download a release and extract the folder into your Arma 3 folder, then enable it in the launcher you use.

### To build:
Clone the project, then pack this into a PBO using your favourite arma tools, for armake2 I run 
```bash
armake2 build Tinter-Furniture-Mod/ Tinter-Furniture-Mod.pbo
```
then place the .pbo in "Arma 3/@tinter_furniture/addons".
