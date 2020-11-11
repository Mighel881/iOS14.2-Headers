/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContextualEvent.h>

@class NSString, TPSContextualDuetEventMeta, TPSContextualDuetEventSource, TPSContextualDuetEventValue;

@interface TPSContextualDuetEvent : TPSContextualEvent {

	NSString* _stream;
	TPSContextualDuetEventMeta* _meta;
	TPSContextualDuetEventSource* _source;
	TPSContextualDuetEventValue* _value;

}

@property (nonatomic,copy) NSString * stream;                                  //@synthesize stream=_stream - In the implementation block
@property (nonatomic,copy) TPSContextualDuetEventMeta * meta;                  //@synthesize meta=_meta - In the implementation block
@property (nonatomic,copy) TPSContextualDuetEventSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) TPSContextualDuetEventValue * value;                //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(TPSContextualDuetEventMeta *)meta;
-(NSString *)stream;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSource:(TPSContextualDuetEventSource *)arg1 ;
-(id)debugDescription;
-(void)setMeta:(TPSContextualDuetEventMeta *)arg1 ;
-(id)newStateFromStateDictionary:(id)arg1 ;
-(TPSContextualDuetEventSource *)source;
-(TPSContextualDuetEventValue *)value;
-(id)initWithCoder:(id)arg1 ;
-(void)setStream:(NSString *)arg1 ;
-(void)setValue:(TPSContextualDuetEventValue *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
