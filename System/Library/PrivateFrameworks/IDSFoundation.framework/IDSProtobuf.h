/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSData, IDSMessageContext;

@interface IDSProtobuf : NSObject <NSCoding> {

	NSMutableDictionary* _protoBufParams;
	NSData* _uncompressedData;

}

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSData * uncompressedData;                //@synthesize uncompressedData=_uncompressedData - In the implementation block
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) BOOL isResponse; 
@property (nonatomic,retain) IDSMessageContext * context; 
+(id)keyRepresentationForType:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(id)pkDescription;
-(void)setIsResponse:(BOOL)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)init;
-(id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setType:(unsigned short)arg1 ;
-(BOOL)isResponse;
-(IDSMessageContext *)context;
-(id)description;
-(NSData *)data;
-(unsigned short)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setContext:(IDSMessageContext *)arg1 ;
-(id)dictionaryRepresentationWithUncompressedData;
-(NSData *)uncompressedData;
-(void)setUncompressedData:(NSData *)arg1 ;
-(void)dealloc;
@end

