/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SnapshotTimer : NSObject {

	BOOL taskIsComplete;

}

@property (assign,nonatomic) BOOL taskIsComplete; 
+(void)takeSnapshotForTask:(id)arg1 ;
-(void)checkout;
-(id)init;
-(void)checkinWithTimeout:(double)arg1 forTask:(id)arg2 ;
-(BOOL)taskIsComplete;
-(void)setTaskIsComplete:(BOOL)arg1 ;
@end

