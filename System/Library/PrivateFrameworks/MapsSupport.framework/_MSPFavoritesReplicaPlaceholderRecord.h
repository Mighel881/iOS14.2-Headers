/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MSPFavoritesReplicaRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, MSPVectorTimestamp, MSPPosition, NSString;

@interface _MSPFavoritesReplicaPlaceholderRecord : NSObject <MSPFavoritesReplicaRecord, NSSecureCoding> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	MSPPosition* _position;
	MSPVectorTimestamp* _positionTimestamp;

}

@property (nonatomic,readonly) MSPPosition * position;                                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp;                   //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)init;
-(NSData *)contents;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 ;
-(MSPPosition *)position;
-(id)initWithCoder:(id)arg1 ;
-(MSPVectorTimestamp *)positionTimestamp;
@end

