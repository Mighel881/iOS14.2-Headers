/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSString;

@interface OADHyperlink : NSObject {

	NSURL* mTargetLocation;
	int mTargetMode;
	NSString* mTargetFrame;
	NSString* mAction;
	NSString* mTooltip;
	NSString* mInvalidUrl;
	BOOL mDoEndSound;
	BOOL mIsVisited;
	BOOL mDoAddToHistory;

}

@property (assign,nonatomic) BOOL doEndSound; 
@property (assign,nonatomic) BOOL isVisited; 
@property (assign,nonatomic) BOOL doAddToHistory; 
-(id)init;
-(unsigned long long)hash;
-(void)setTargetFrame:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAction:(id)arg1 ;
-(id)targetFrame;
-(id)tooltip;
-(id)action;
-(id)targetLocation;
-(int)targetMode;
-(void)setTargetLocation:(id)arg1 ;
-(void)setTargetMode:(int)arg1 ;
-(void)setTooltip:(id)arg1 ;
-(id)invalidUrl;
-(void)setInvalidUrl:(id)arg1 ;
-(BOOL)doEndSound;
-(void)setDoEndSound:(BOOL)arg1 ;
-(BOOL)isVisited;
-(void)setIsVisited:(BOOL)arg1 ;
-(BOOL)doAddToHistory;
-(void)setDoAddToHistory:(BOOL)arg1 ;
@end
