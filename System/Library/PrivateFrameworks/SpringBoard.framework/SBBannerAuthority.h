/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BNConsideringDelegate.h>
#import <libobjc.A.dylib/BNConsidering.h>

@protocol BNConsideringDelegate;
@class NSMutableDictionary, NSString;

@interface SBBannerAuthority : NSObject <BNConsideringDelegate, BNConsidering> {

	NSMutableDictionary* _requesterIDsToAuthorities;
	id<BNConsideringDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<BNConsideringDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BNConsideringDelegate>)delegate;
-(void)setDelegate:(id<BNConsideringDelegate>)arg1 ;
-(void)registerAuthority:(id)arg1 forRequesterIdentifier:(id)arg2 ;
-(void)bannerAuthority:(id)arg1 mayChangeDecisionForResponsiblePresentable:(id)arg2 ;
-(long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2 ;
-(long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3 ;
-(long long)_mediatedDecisionFromDecisions:(id)arg1 defaultDecision:(long long)arg2 ;
@end
