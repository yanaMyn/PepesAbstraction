// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PepesAbstraction",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "PepesAbstraction",
            targets: ["PepesAbstraction"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "PepesAbstraction",
            path: "./PepesAbstraction.xcframework"
        ),
    ]
)
