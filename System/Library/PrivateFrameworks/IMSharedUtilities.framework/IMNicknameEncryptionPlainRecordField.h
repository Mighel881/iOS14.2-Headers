/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject {

	NSString* _fieldName;
	NSData* _plainData;

}

@property (nonatomic,readonly) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSData * plainData;                //@synthesize plainData=_plainData - In the implementation block
-(id)initWithFieldName:(id)arg1 plainData:(id)arg2 ;
-(id)description;
-(NSString *)fieldName;
-(NSData *)plainData;
-(void)dealloc;
@end

