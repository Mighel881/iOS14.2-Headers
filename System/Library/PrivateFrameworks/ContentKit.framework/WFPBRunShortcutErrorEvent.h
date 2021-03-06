/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunShortcutErrorEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSString* _errorCode;
	NSString* _errorDomain;
	NSString* _key;
	BOOL _didRunRemotely;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                   //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDidRunRemotely; 
@property (assign,nonatomic) BOOL didRunRemotely;                      //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasKey;
-(NSString *)key;
-(unsigned long long)hash;
-(NSString *)actionIdentifier;
-(void)setKey:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)errorCode;
-(void)setErrorCode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)didRunRemotely;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasActionIdentifier;
-(void)setHasDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasDidRunRemotely;
@end

