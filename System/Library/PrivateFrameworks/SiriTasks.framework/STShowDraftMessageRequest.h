/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {

	NSURL* _draftMessageIdentifier;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)message;
-(id)createResponse;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithDraftMessageIdentifier:(id)arg1 ;
-(id)draftMessageIdentifier;
-(id)createUsageResult;
@end
