const std = @import("std");
const gen = @import("build.gen.zig");

pub fn build(b: *std.Build) !void {
    const module = b.addModule("zig_xed", .{
        .root_source_file = b.path("src/root.zig"),
    });

    module.addIncludePath(b.path("c/include/private"));
    module.addIncludePath(b.path("c/include/public"));
    module.addIncludePath(b.path("c/include/public/xed"));
    module.addIncludePath(b.path("c/obj/include-public"));
    module.addIncludePath(b.path("c/obj/include-private"));

    gen.addSources(module);
}
