/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray, AMSEngagementRequest;

@interface AMSEngagementEnqueueResult : NSObject <NSSecureCoding> {

	NSDictionary* _data;
	NSArray* _actions;
	AMSEngagementRequest* _request;

}

@property (nonatomic,retain) NSDictionary * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * actions;                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) AMSEngagementRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)archiveClasses;
-(void)setActions:(NSArray *)arg1 ;
-(AMSEngagementRequest *)request;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setRequest:(AMSEngagementRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)data;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)actions;
@end

