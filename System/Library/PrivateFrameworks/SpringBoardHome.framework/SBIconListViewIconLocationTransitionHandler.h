/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBIconListViewIconLocationTransitioning.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBIconListView;

@interface SBIconListViewIconLocationTransitionHandler : NSObject <SBIconListViewIconLocationTransitioning, BSDescriptionProviding> {

	NSString* _iconLocation;
	NSString* _reason;
	SBIconListView* _iconListView;
	double _progress;

}

@property (nonatomic,copy,readonly) NSString * iconLocation;                      //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                            //@synthesize reason=_reason - In the implementation block
@property (nonatomic,__weak,readonly) SBIconListView * iconListView;              //@synthesize iconListView=_iconListView - In the implementation block
@property (assign,nonatomic) double progress;                                     //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeTransition:(BOOL)arg1 ;
-(id)succinctDescription;
-(NSString *)reason;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBIconListView *)iconListView;
-(double)progress;
-(NSString *)description;
-(id)initWithIconLocation:(id)arg1 reason:(id)arg2 iconListView:(id)arg3 ;
-(NSString *)iconLocation;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(id)succinctDescriptionBuilder;
@end

