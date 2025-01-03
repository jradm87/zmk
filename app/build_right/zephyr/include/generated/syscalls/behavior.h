/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_BEHAVIOR_H
#define Z_INCLUDE_SYSCALLS_BEHAVIOR_H


#include <zephyr/tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <stdarg.h>

#include <syscall_list.h>
#include <zephyr/syscall.h>

#include <zephyr/linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern const struct device * z_impl_behavior_get_binding(const char * name);

__pinned_func
static inline const struct device * behavior_get_binding(const char * name)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const char * val; } parm0 = { .val = name };
		return (const struct device *) arch_syscall_invoke1(parm0.x, K_SYSCALL_BEHAVIOR_GET_BINDING);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_get_binding(name);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_get_binding(name) ({ 	const struct device * syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_GET_BINDING, behavior_get_binding, name); 	syscall__retval = behavior_get_binding(name); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_GET_BINDING, behavior_get_binding, name, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_behavior_keymap_binding_convert_central_state_dependent_params(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event);

__pinned_func
static inline int behavior_keymap_binding_convert_central_state_dependent_params(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct zmk_behavior_binding * val; } parm0 = { .val = binding };
		union { uintptr_t x; struct zmk_behavior_binding_event val; } parm1 = { .val = event };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_CONVERT_CENTRAL_STATE_DEPENDENT_PARAMS);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_keymap_binding_convert_central_state_dependent_params(binding, event);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_keymap_binding_convert_central_state_dependent_params(binding, event) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_CONVERT_CENTRAL_STATE_DEPENDENT_PARAMS, behavior_keymap_binding_convert_central_state_dependent_params, binding, event); 	syscall__retval = behavior_keymap_binding_convert_central_state_dependent_params(binding, event); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_CONVERT_CENTRAL_STATE_DEPENDENT_PARAMS, behavior_keymap_binding_convert_central_state_dependent_params, binding, event, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_behavior_get_parameter_metadata(const struct device * behavior, struct behavior_parameter_metadata * param_metadata);

__pinned_func
static inline int behavior_get_parameter_metadata(const struct device * behavior, struct behavior_parameter_metadata * param_metadata)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = behavior };
		union { uintptr_t x; struct behavior_parameter_metadata * val; } parm1 = { .val = param_metadata };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_BEHAVIOR_GET_PARAMETER_METADATA);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_get_parameter_metadata(behavior, param_metadata);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_get_parameter_metadata(behavior, param_metadata) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_GET_PARAMETER_METADATA, behavior_get_parameter_metadata, behavior, param_metadata); 	syscall__retval = behavior_get_parameter_metadata(behavior, param_metadata); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_GET_PARAMETER_METADATA, behavior_get_parameter_metadata, behavior, param_metadata, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_behavior_get_locality(const struct device * behavior, enum behavior_locality * locality);

__pinned_func
static inline int behavior_get_locality(const struct device * behavior, enum behavior_locality * locality)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = behavior };
		union { uintptr_t x; enum behavior_locality * val; } parm1 = { .val = locality };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_BEHAVIOR_GET_LOCALITY);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_get_locality(behavior, locality);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_get_locality(behavior, locality) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_GET_LOCALITY, behavior_get_locality, behavior, locality); 	syscall__retval = behavior_get_locality(behavior, locality); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_GET_LOCALITY, behavior_get_locality, behavior, locality, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_behavior_keymap_binding_pressed(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event);

__pinned_func
static inline int behavior_keymap_binding_pressed(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct zmk_behavior_binding * val; } parm0 = { .val = binding };
		union { uintptr_t x; struct zmk_behavior_binding_event val; } parm1 = { .val = event };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_PRESSED);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_keymap_binding_pressed(binding, event);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_keymap_binding_pressed(binding, event) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_PRESSED, behavior_keymap_binding_pressed, binding, event); 	syscall__retval = behavior_keymap_binding_pressed(binding, event); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_PRESSED, behavior_keymap_binding_pressed, binding, event, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_behavior_keymap_binding_released(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event);

__pinned_func
static inline int behavior_keymap_binding_released(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct zmk_behavior_binding * val; } parm0 = { .val = binding };
		union { uintptr_t x; struct zmk_behavior_binding_event val; } parm1 = { .val = event };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_RELEASED);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_keymap_binding_released(binding, event);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_keymap_binding_released(binding, event) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_RELEASED, behavior_keymap_binding_released, binding, event); 	syscall__retval = behavior_keymap_binding_released(binding, event); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_KEYMAP_BINDING_RELEASED, behavior_keymap_binding_released, binding, event, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_behavior_sensor_keymap_binding_accept_data(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event, const struct zmk_sensor_config * sensor_config, size_t channel_data_size, const struct zmk_sensor_channel_data * channel_data);

__pinned_func
static inline int behavior_sensor_keymap_binding_accept_data(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event, const struct zmk_sensor_config * sensor_config, size_t channel_data_size, const struct zmk_sensor_channel_data * channel_data)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct zmk_behavior_binding * val; } parm0 = { .val = binding };
		union { uintptr_t x; struct zmk_behavior_binding_event val; } parm1 = { .val = event };
		union { uintptr_t x; const struct zmk_sensor_config * val; } parm2 = { .val = sensor_config };
		union { uintptr_t x; size_t val; } parm3 = { .val = channel_data_size };
		union { uintptr_t x; const struct zmk_sensor_channel_data * val; } parm4 = { .val = channel_data };
		return (int) arch_syscall_invoke5(parm0.x, parm1.x, parm2.x, parm3.x, parm4.x, K_SYSCALL_BEHAVIOR_SENSOR_KEYMAP_BINDING_ACCEPT_DATA);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_sensor_keymap_binding_accept_data(binding, event, sensor_config, channel_data_size, channel_data);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_sensor_keymap_binding_accept_data(binding, event, sensor_config, channel_data_size, channel_data) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_SENSOR_KEYMAP_BINDING_ACCEPT_DATA, behavior_sensor_keymap_binding_accept_data, binding, event, sensor_config, channel_data_size, channel_data); 	syscall__retval = behavior_sensor_keymap_binding_accept_data(binding, event, sensor_config, channel_data_size, channel_data); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_SENSOR_KEYMAP_BINDING_ACCEPT_DATA, behavior_sensor_keymap_binding_accept_data, binding, event, sensor_config, channel_data_size, channel_data, syscall__retval); 	syscall__retval; })
#endif
#endif


extern int z_impl_behavior_sensor_keymap_binding_process(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event, enum behavior_sensor_binding_process_mode mode);

__pinned_func
static inline int behavior_sensor_keymap_binding_process(struct zmk_behavior_binding * binding, struct zmk_behavior_binding_event event, enum behavior_sensor_binding_process_mode mode)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; struct zmk_behavior_binding * val; } parm0 = { .val = binding };
		union { uintptr_t x; struct zmk_behavior_binding_event val; } parm1 = { .val = event };
		union { uintptr_t x; enum behavior_sensor_binding_process_mode val; } parm2 = { .val = mode };
		return (int) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_BEHAVIOR_SENSOR_KEYMAP_BINDING_PROCESS);
	}
#endif
	compiler_barrier();
	return z_impl_behavior_sensor_keymap_binding_process(binding, event, mode);
}

#if defined(CONFIG_TRACING_SYSCALL)
#ifndef DISABLE_SYSCALL_TRACING

#define behavior_sensor_keymap_binding_process(binding, event, mode) ({ 	int syscall__retval; 	sys_port_trace_syscall_enter(K_SYSCALL_BEHAVIOR_SENSOR_KEYMAP_BINDING_PROCESS, behavior_sensor_keymap_binding_process, binding, event, mode); 	syscall__retval = behavior_sensor_keymap_binding_process(binding, event, mode); 	sys_port_trace_syscall_exit(K_SYSCALL_BEHAVIOR_SENSOR_KEYMAP_BINDING_PROCESS, behavior_sensor_keymap_binding_process, binding, event, mode, syscall__retval); 	syscall__retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
