/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BRCFSEvent : NSObject {

	NSString* _path;
	unsigned _flags;
	unsigned long long _eventID;

}

@property (nonatomic,retain) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) unsigned flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long eventID;              //@synthesize eventID=_eventID - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned long long)eventID;
-(NSString *)path;
-(id)initWithPath:(id)arg1 flags:(unsigned)arg2 eventID:(unsigned long long)arg3 ;
@end

