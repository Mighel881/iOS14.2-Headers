/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/STSiriModelObject.h>

@interface STSetting : STSiriModelObject {

	long long _type;
	id _value;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id value;                    //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)value;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(id)arg1 ;
@end

