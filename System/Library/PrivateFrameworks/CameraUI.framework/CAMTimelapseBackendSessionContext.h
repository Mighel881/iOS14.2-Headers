/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CAMTimelapseState, NSArray;

@interface CAMTimelapseBackendSessionContext : NSObject {

	NSString* _timelapseUUID;
	CAMTimelapseState* _state;
	NSArray* _filesToDelete;
	NSArray* _filesToWrite;

}

@property (nonatomic,readonly) NSString * timelapseUUID;              //@synthesize timelapseUUID=_timelapseUUID - In the implementation block
@property (nonatomic,retain) CAMTimelapseState * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * filesToDelete;                 //@synthesize filesToDelete=_filesToDelete - In the implementation block
@property (nonatomic,retain) NSArray * filesToWrite;                  //@synthesize filesToWrite=_filesToWrite - In the implementation block
-(id)init;
-(void)setState:(CAMTimelapseState *)arg1 ;
-(CAMTimelapseState *)state;
-(id)description;
-(void)setFilesToDelete:(NSArray *)arg1 ;
-(NSArray *)filesToDelete;
-(NSString *)timelapseUUID;
-(id)initWithTimelapseUUID:(id)arg1 ;
-(NSArray *)filesToWrite;
-(void)setFilesToWrite:(NSArray *)arg1 ;
@end
