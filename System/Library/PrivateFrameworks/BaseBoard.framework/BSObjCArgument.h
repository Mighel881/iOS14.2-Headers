/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSArray;

@interface BSObjCArgument : NSObject <BSDescriptionProviding> {

	NSString* _encoding;
	unsigned long long _size;
	char _type;
	BOOL _onewayVoid;
	BOOL _plistObject;
	Class _objectClass;
	NSString* _structName;
	NSArray* _protocols;
	NSArray* _containedClasses;
	NSString* _name;
	long long _index;

}

@property (nonatomic,copy,readonly) NSString * encoding; 
@property (nonatomic,readonly) char type; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) long long index;                                    //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * structName;                         //@synthesize structName=_structName - In the implementation block
@property (nonatomic,retain,readonly) Class objectClass;                           //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSArray * protocols;                           //@synthesize protocols=_protocols - In the implementation block
@property (nonatomic,retain,readonly) NSArray * containedClasses;                  //@synthesize containedClasses=_containedClasses - In the implementation block
@property (getter=isObject,nonatomic,readonly) BOOL object; 
@property (getter=isXPCObject,nonatomic,readonly) BOOL xpcObject; 
@property (getter=isBlock,nonatomic,readonly) BOOL block; 
@property (getter=isPointer,nonatomic,readonly) BOOL pointer; 
@property (getter=isBoolean,nonatomic,readonly) BOOL boolean; 
@property (getter=isVoid,nonatomic,readonly) BOOL isVoid; 
@property (getter=isOnewayVoid,nonatomic,readonly) BOOL onewayVoid;                //@synthesize onewayVoid=_onewayVoid - In the implementation block
@property (getter=isPlistObject,nonatomic,readonly) BOOL plistObject;              //@synthesize plistObject=_plistObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)objectClass;
-(id)succinctDescription;
-(BOOL)isXPCObject;
-(BOOL)isPointer;
-(BOOL)isVoid;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)encoding;
-(BOOL)isObject;
-(unsigned long long)size;
-(BOOL)isPlistObject;
-(NSString *)name;
-(NSString *)description;
-(NSArray *)protocols;
-(long long)index;
-(BOOL)isBlock;
-(BOOL)isBoolean;
-(char)type;
-(NSArray *)containedClasses;
-(id)_prettyTypeString;
-(NSString *)structName;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isOnewayVoid;
-(id)succinctDescriptionBuilder;
@end

