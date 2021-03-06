/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPModelRequest, MPIdentifierSet;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;

}

@property (nonatomic,copy) MPModelRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;              //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requiredPropertiesForStaticMediaClips;
-(MPModelRequest *)request;
-(MPIdentifierSet *)startItemIdentifiers;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

