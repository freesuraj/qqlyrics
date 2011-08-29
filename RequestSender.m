//
//  RequestSender.m
//  MusicSeeker
//
//  Created by Martian on 11-6-3.
//  Copyright 2011 No. All rights reserved.
//
 
#import "RequestSender.h"
 
@implementation RequestSender
 
+ (NSString*)sendRequest:(NSString*)url
{
    NSString *urlString = url;
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] init];
    [request setURL:[NSURL URLWithString:urlString]];
    [request setHTTPMethod:@"GET"];
    NSString *contentType = [NSString stringWithFormat:@"text/xml"];
    [request addValue:contentType forHTTPHeaderField: @"Content-Type"];
 
    NSHTTPURLResponse* urlResponse = nil;
    NSData *responseData = [NSURLConnection sendSynchronousRequest:request returningResponse:&urlResponse error:NULL];
    NSString *result = [[[NSString alloc] initWithData:responseData encoding:NSUTF8StringEncoding] autorelease];
    //0x80000632 gb2312
    [request release];
    if ([urlResponse statusCode] >= 200 && [urlResponse statusCode] < 300)
        return result;
 
    return @"NULL";
}
 
@end
