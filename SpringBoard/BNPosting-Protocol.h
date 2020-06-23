//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol BNPresentable;

@protocol BNPosting <NSObject>
- (_Bool)revokeAllPresentablesWithRequesterIdentifier:(NSString *)arg1 reason:(NSString *)arg2 options:(unsigned long long)arg3 userInfo:(NSDictionary *)arg4 error:(out id *)arg5;
- (_Bool)revokePresentableWithRequestIdentifier:(NSString *)arg1 requesterIdentifier:(NSString *)arg2 reason:(NSString *)arg3 options:(unsigned long long)arg4 userInfo:(NSDictionary *)arg5 error:(out id *)arg6;
- (_Bool)postPresentable:(id <BNPresentable>)arg1 withOptions:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3 error:(out id *)arg4;
@end

