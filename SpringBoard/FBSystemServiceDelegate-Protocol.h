//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAuditToken, BSProcessHandle, FBSShutdownOptions, FBSystemService, FBSystemServiceOpenApplicationRequest, NSDictionary, NSSet, NSString, NSURL;
@protocol FBSApplicationInfoProvider;

@protocol FBSystemServiceDelegate <NSObject>

@optional
- (void)systemServicePrepareForShutdown:(FBSystemService *)arg1 andReboot:(_Bool)arg2;
- (void)systemServicePrepareForExit:(FBSystemService *)arg1 andRelaunch:(_Bool)arg2;
- (void)systemServicePrepareForShutdown:(FBSystemService *)arg1 withOptions:(unsigned long long)arg2;
- (void)systemService:(FBSystemService *)arg1 prepareForShutdownWithOptions:(FBSShutdownOptions *)arg2 origin:(BSProcessHandle *)arg3;
- (void)systemService:(FBSystemService *)arg1 handleActions:(NSSet *)arg2 origin:(BSAuditToken *)arg3 withResult:(void (^)(long long))arg4;
- (void)systemService:(FBSystemService *)arg1 isPasscodeLockedOrBlockedWithResult:(void (^)(_Bool))arg2;
- (void)systemService:(FBSystemService *)arg1 handleOpenURLRequest:(NSURL *)arg2 application:(NSString *)arg3 options:(NSDictionary *)arg4 origin:(BSAuditToken *)arg5 withResult:(void (^)(long long))arg6;
- (void)systemService:(FBSystemService *)arg1 handleOpenApplicationRequest:(NSString *)arg2 options:(NSDictionary *)arg3 origin:(BSAuditToken *)arg4 withResult:(void (^)(long long))arg5;
- (void)systemService:(FBSystemService *)arg1 handleOpenApplicationRequest:(FBSystemServiceOpenApplicationRequest *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)systemService:(FBSystemService *)arg1 canActivateApplication:(NSString *)arg2 withResult:(void (^)(long long))arg3;
- (id <FBSApplicationInfoProvider>)systemServiceApplicationInfoProvider:(FBSystemService *)arg1;
@end

