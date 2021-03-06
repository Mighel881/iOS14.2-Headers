/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNChangeHistoryLabeledValueChange : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	NSString* _propertyKey;
	NSString* _labeledValueIdentifier;
	long long _changeType;

}

@property (nonatomic,readonly) NSString * contactIdentifier;                   //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * propertyKey;                    //@synthesize propertyKey=_propertyKey - In the implementation block
@property (nonatomic,readonly) NSString * labeledValueIdentifier;              //@synthesize labeledValueIdentifier=_labeledValueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                           //@synthesize changeType=_changeType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contactIdentifier;
-(long long)changeType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 changeType:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)propertyKey;
-(NSString *)labeledValueIdentifier;
@end

