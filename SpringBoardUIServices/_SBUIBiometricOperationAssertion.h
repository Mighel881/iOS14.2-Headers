//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSSimpleAssertion.h>

#import <SpringBoardUIServices/BSDescriptionProviding-Protocol.h>

@class NSSet, NSString;

@interface _SBUIBiometricOperationAssertion : BSSimpleAssertion <BSDescriptionProviding>
{
    NSSet *_operations;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSSet *operations; // @synthesize operations=_operations;
@property(readonly) Class superclass;
@end

