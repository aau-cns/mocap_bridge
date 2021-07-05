# CNS Flight Stack: Mocap Bridge

[![Release](https://img.shields.io/github/v/release/aau-cns/mocap_bridge?include_prereleases&logo=github)](https://github.com/aau-cns/mocap_bridge/releases) 
[![License](https://img.shields.io/badge/License-AAUCNS-336B81.svg)](./LICENSE) [![Paper](https://img.shields.io/badge/IEEEXplore-10.1109/LRA.2022.3196117-00629B.svg?logo=ieee)](https://doi.org/10.1109/LRA.2022.3196117)

ROS package to forward mocap poses or transforms to the [PX4 bridge].

Maintainer: [Alessandro Fornasier](mailto:alessandro.fornasier@aau.at)

[PX4 Bridge]: https://github.com/aau-cns/mavros/tree/ext_state_est/

## Credit
This code was written by the [Control of Networked System (CNS)](https://www.aau.at/en/smart-systems-technologies/control-of-networked-systems/), University of Klagenfurt, Klagenfurt, Austria.

## License
This software is made available to the public to use (_source-available_), licensed under the terms of the BSD-2-Clause-License with no commercial use allowed, the full terms of which are made available in the `LICENSE` file. No license in patents is granted.

### Usage for academic purposes
If you use this software in an academic research setting, please cite the
corresponding [academic paper] and consult the `LICENSE` file for a detailed explanation.

```latex
@article{cns_flightstack22,
    title        = {CNS Flight Stack for Reproducible, Customizable, and Fully Autonomous Applications},
    author       = {Scheiber, Martin and Fornasier, Alessandro and Jung, Roland and Böhm, Christoph and Dhakate, Rohit and Stewart, Christian and Steinbrener, Jan and Weiss, Stephan and Brommer, Christian},
    journal      = {IEEE Robotics and Automation Letters},
    volume       = {7},
    number       = {4},
    year         = {2022},
    doi          = {10.1109/LRA.2022.3196117},
    url          = {https://ieeexplore.ieee.org/document/9849131},
    pages        = {11283--11290}
}
```

---

## Getting Started

### Prerequesites
This package is part of the [CNS Flight Stack] and thus depends on the other packages of the flight stack:
- [CNS Flight Stack: Autonomy Engine]
- [MavROS (CNS Version)]
- [PX4Bridge (CNS Version)]

Further the following libraries are required
- Eigen
- ROS noetic

---

Copyright (C) 2021-2023 Christian Brommer. Alessandro Fornasier, and Martin Scheiber, Control of Networked Systems Group, University of Klagenfurt, Austria.
You can contact the authors at [christoph.boehm@aau.at](mailto:christoph.boehm@aau.at?subject=[CNS%20Flight%20Stack]%20mission_sequencer%20package), [alessandro.fornasier@aau.at](mailto:alessandro.fornasier@aau.at?subject=[CNS%20Flight%20Stack]%20mission_sequencer%20package), and [martin.scheiber@aau.at](mailto:martin.scheiber@aau.at?subject=[CNS%20Flight%20Stack]%20mission_sequencer%20package).

<!-- LINKS: -->
[CNS Flight Stack]: http://sst.aau.at/cns
[CNS Flight Stack: Autonomy Engine]: http://sst.aau.at/cns
[MavROS (CNS Version)]: https://github.com/aau-cns/mavros
[PX4Bridge (CNS Version)]: https://github.com/aau-cns/PX4-Autopilot
[academic paper]: https://ieeexplore.ieee.org/document/9849131
