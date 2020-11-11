/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying> {

	NSMutableDictionary* _clock;

}
-(id)serialize;
-(id)init;
-(id)allUUIDs;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(unsigned long long)compareTo:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)incrementClockForUUID:(id)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 ;
@end
