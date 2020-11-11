/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSPForwardsCompatibleField
@property (nonatomic,readonly) BOOL hasKnownValues; 
@property (nonatomic,readonly) BOOL hasUnknownValues; 
@required
-(void)loadFromUnarchiver:(id)arg1;
-(void)saveToArchiver:(id)arg1;
-(void)updateMessageInfo:(MessageInfo*)arg1;
-(const FieldInfo*)fieldInfo;
-(void)mergeToUnknownFieldSet:(UnknownFieldSet*)arg1;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2;
-(BOOL)hasKnownValues;
-(BOOL)hasUnknownValues;

@end
