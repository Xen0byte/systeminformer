/*
 * Copyright (c) 2022 Winsider Seminars & Solutions, Inc.  All rights reserved.
 *
 * This file is part of System Informer.
 *
 * Authors:
 *
 *     dmex    2024
 *
 */

#ifndef _PH_USER_H
#define _PH_USER_H

PHLIBAPI
NTSTATUS
NTAPI
PhAttachConsole(
    _In_ HANDLE ProcessId
    );

PHLIBAPI
HANDLE
NTAPI
PhGetStdHandle(
    _In_ ULONG StdHandle
    );

PHLIBAPI
VOID
NTAPI
PhFreeConsole(
    VOID
    );

PHLIBAPI
NTSTATUS
NTAPI
PhGetConsoleProcessList(
    _In_ HANDLE ProcessId,
    _Out_writes_(ProcessCount) PULONG ProcessList,
    _In_ ULONG ProcessCount
    );

PHLIBAPI
NTSTATUS
NTAPI
PhConsoleControlSetForeground(
    _In_ HANDLE ProcessHandle,
    _In_ BOOLEAN Foreground
    );

PHLIBAPI
NTSTATUS
NTAPI
PhConsoleControlEndTask(
    _In_ HANDLE ProcessId,
    _In_ HWND WindowHandle
    );

#endif
