/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MRProtocolMessageLogger : NSObject {

	BOOL _shouldLog;
	BOOL _shouldVerboselyLog;

}

@property (assign,nonatomic) BOOL shouldLog;                       //@synthesize shouldLog=_shouldLog - In the implementation block
@property (assign,nonatomic) BOOL shouldVerboselyLog;              //@synthesize shouldVerboselyLog=_shouldVerboselyLog - In the implementation block
+(id)sharedLogger;
-(id)init;
-(void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3 ;
-(void)setShouldLog:(BOOL)arg1 ;
-(void)setShouldVerboselyLog:(BOOL)arg1 ;
-(BOOL)shouldVerboselyLog;
-(BOOL)shouldLog;
@end
