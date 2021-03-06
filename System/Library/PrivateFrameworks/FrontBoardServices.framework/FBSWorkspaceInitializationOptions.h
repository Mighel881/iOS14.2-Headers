/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBSWorkspaceDelegate;
@class FBSSerialQueue;

@interface FBSWorkspaceInitializationOptions : NSObject {

	BOOL _startsInactive;
	id<FBSWorkspaceDelegate> _delegate;
	FBSSerialQueue* _callOutQueue;

}

@property (assign,setter=_setStartsInactive:,nonatomic) BOOL _startsInactive;              //@synthesize startsInactive=_startsInactive - In the implementation block
@property (nonatomic,readonly) id<FBSWorkspaceDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;                                //@synthesize callOutQueue=_callOutQueue - In the implementation block
+(id)optionsWithDelegate:(id)arg1 ;
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
-(id)_initWithDelegate:(id)arg1 ;
-(id)init;
-(BOOL)_startsInactive;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)_setStartsInactive:(BOOL)arg1 ;
-(FBSSerialQueue *)callOutQueue;
@end

